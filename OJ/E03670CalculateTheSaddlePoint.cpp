#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //input
    int matrix[5][5];
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> matrix[i][j];
    
    //look for saddle point
    int ROW[5], col[5];
    for (int i = 0; i < 5; ++i)
    {
        ROW[i] = 0;
        for (int j = 0; j < 5; ++j)
            if (matrix[i][j] > matrix[i][ROW[i]])
                ROW[i] = j;
    }

    for (int j = 0; j < 5; ++j)
    {
        col[j] = 0;
        for (int i = 0; i < 5; ++i)
            if (matrix[i][j] > matrix[col[j]][j])
                col[j] = i;
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
    }
    return 0;
}