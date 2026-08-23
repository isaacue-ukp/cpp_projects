#include <bits/stdc++.h>
using namespace std;

const int C = 1111;

bool good(int a)   //a is good means a satisfies the condition.
{
    for (int i = 1; i < 10; ++i)
    {
        int b = a - C * i;
        if ((int)sqrt(b) * (int)sqrt(b) == b && b >= 1000)
            return true;
    }
    return false;
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int MAX;
    cin >> MAX;
    for (int i = 32; i * i < MAX; ++i)
        if (good(i * i))
            cout << i * i << "\n";
    return 0;
}