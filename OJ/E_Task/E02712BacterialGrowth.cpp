#include <bits/stdc++.h>
using namespace std;

const int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int dn(int m, int d) // tanslate a date into a number
{
    long num = d;
    for (int i = 0; i < (m - 1); ++i)
        num += month[i];
    return num;
}

void solve()
{
    long m1, d1, num, m2, d2;
    cin >> m1 >> d1 >> num >> m2 >> d2;
    for (int i = 0; i < (dn(m2, d2) - dn(m1, d1)); ++i)
        num *= 2;
    cout << num << "\n";
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}