#include <bits/stdc++.h>
using namespace std;



int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[21];
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i < 21; i++)
        a[i] = a[i - 1] + a[i - 2];
    int k;
    cin >> k;
    while(k--)
    {
        int t;
        cin >> t;
        cout << a[t] << "\n"; 
    }
    return 0;
}