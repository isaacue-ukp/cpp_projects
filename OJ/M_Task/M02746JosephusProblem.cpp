#include <bits/stdc++.h>
using namespace std;

int Josephus(int n, int m)
{
    if (n == 1)
        return 0;
    else 
        return (Josephus(n - 1, m) + m) % n;
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    while (cin >> n >> m && m + n != 0)
        cout << Josephus(n, m) + 1 << "\n";
    return 0;
}