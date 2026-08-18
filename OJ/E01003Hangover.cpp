#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t, sum;
    while (cin >> t && t != 0.00)
    {
        int n = 2;
        sum = 0;
        while (sum < t)
        {
            sum += (1.0 / n);
            n++;
        }
        cout << n - 2 << " card(s)\n";
    }
    return 0;
}