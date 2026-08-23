#include <bits/stdc++.h>
using namespace std;


int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    int tag[N];
    tag[0] = 1;
    for (int i = 1; i < N; ++i)
    {
        int temp = 1;
        for (int j = 0; j < i; ++j)
            if (a[j] < a[i] && temp < tag[j] + 1)
                temp = tag[j] + 1;
        tag [i] = temp;
    }
    int max = 1;
    for (int i = 1; i < N; ++i)
        if (tag[i] > max)
            max = tag[i];
    cout << max <<"\n";
    return 0;
}