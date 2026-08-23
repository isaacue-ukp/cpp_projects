#include <bits/stdc++.h>
using namespace std;

vector<string> bday[13][32];

void input()
{
    int tot; // total
    cin >> tot;
    while (tot--) // input students data
    {
        string num;
        int m, d;
        cin >> num >> m >> d;
        bday[m][d].push_back(num);
    }
}

void output()
{
    for (int m = 1; m <= 12; m++)
        for (int d = 1; d <= 31; d++)
        {
            if (bday[m][d].size() > 1)
            {
                cout << m << " " << d;
                for (int i = 0; i < bday[m][d].size(); ++i)
                    cout << " " << bday[m][d][i];
                cout << "\n";
            }
        }
}

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    input();
    output();
    return 0;
}