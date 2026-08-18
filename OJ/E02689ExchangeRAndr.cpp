#include <bits/stdc++.h>
using namespace std;

void change(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    else if (c >= 'a' && c <= 'z')
        c -= 32;
    cout << c;
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char c;
    while (cin.get(c) && c != '\n')
        change(c);
    cout << "\n";
    return 0;
}