#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // input
    int m[5][5];
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> m[i][j];

    
    // look for Minimun and Maxinum
    bool RowMax[5][5] = {}, ColMin[5][5] = {};
    for (int i = 0; i < 5; ++i)
    {
        int temp = m[i][0];
        for (int j = 1; j < 5; ++j)
            if (temp < m[i][j])
                temp = m[i][j];
        for (int j = 0; j < 5; ++j)
            if (temp == m[i][j])
                RowMax[i][j] = 1;
    }
    for (int j = 0; j < 5; ++j)
    {
        int temp = m[0][j];
        for (int i = 1; i < 5; ++i)
            if (temp > m[i][j])
                temp = m[i][j];
        for (int i = 0; i < 5; ++i)
            if (temp == m[i][j])
                ColMin[i][j] = 1;
    }

    //look for saddle point
    bool SadPoi[5][5] = {};
    bool Product = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
        {
            if (RowMax[i][j] && ColMin[i][j])
                SadPoi[i][j] = 1;
            Product += SadPoi[i][j];
        }
    
    //print the result
    if (!Product)
        cout << "not found\n";
    else
        for (int i = 0; i < 5; ++i)
            for (int j = 0; j < 5; ++j)
                if (SadPoi[i][j])
                    cout << i + 1 << " " << j + 1 << " " << m[i][j] << "\n";
    return 0;
}