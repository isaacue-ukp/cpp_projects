#include <bits/stdc++.h>
using namespace std;

void qsort(int a[], int left, int right)
{
    if (right > left)
    {
        int pivot = a[left];
        int mark = left;   //where the pivot is
        for (int i = left + 1; i <= right; ++i)
            if (pivot > a[i])   //wanna place a[i] before the pivot 
            {
                int temp = a[i];
                for (int j = i; j > mark; j--)
                    a[j] = a[j - 1];
                a[mark] = temp;
                mark++;
            }
        qsort(a, left, mark - 1);
        qsort(a, mark + 1, right);
    }
    
}

int main()
{
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; ++i)
        cin >> a[i];

    qsort(a, 0, N - 1);
    for (int i = 0; i < N; ++i)
        cout << a[i] << " ";
    cout << "\n";

    return 0;
}