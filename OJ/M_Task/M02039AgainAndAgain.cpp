#include <bits/stdc++.h>
using namespace std;


int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int col;
    cin >> col;
    char in[201];
    int k = 0;
    while (cin >> in[k])
        k++;
    
    char res[k / col][col];
    for (int i = 0; i < k / col; ++i)
    {
        if (i % 2 == 0)
            for (int j = 0; j < col; ++j)
                res[i][j] = in[i * col + j];
        else
            for (int j = 0; j < col; ++j)
                res[i][j] = in[(i + 1) * col - j - 1];
    }
    
    for (int j = 0; j < col; ++j)
        for(int i = 0; i < k / col; ++i)
            cout << res[i][j];
    cout << "\n"; 
    return 0;
}