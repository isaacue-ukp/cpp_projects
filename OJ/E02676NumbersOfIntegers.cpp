#include <bits/stdc++.h>
using namespace std;

int main() {
    // 关闭同步，加速 cin/cout 输入输出
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k, c1 = 0, c5 = 0, c10 = 0;
    cin >> k;
    for(int i = 0; i < k; ++i)
    {
        int x;
        cin >> x;
        if(x == 1) c1++;
        else if(x == 5) c5++;
        else if(x == 10) c10++;
    }
    cout << c1 << endl << c5 << endl << c10 << endl;
    return 0;
}