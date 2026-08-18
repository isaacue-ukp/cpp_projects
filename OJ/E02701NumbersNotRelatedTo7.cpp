#include <bits/stdc++.h>
using namespace std;

bool with7in(int n)
{
    while(n > 0)
    {
        if (n % 10 == 7)
            return true;
        n /= 10;
    }
    return false;
}

bool test(int i)    //i is not related to 7
{
    return !(i % 7 == 0 || with7in(i));
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0, n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        if (test(i))
            sum += (i * i);
    cout << sum << "\n";
    return 0;
}