#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while(a % b != 0)
    {
        a %= b;
        swap(a, b);
    }
    return b;
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (cin >> a >> b)
        cout << gcd(a, b) << "\n";
    return 0;
}