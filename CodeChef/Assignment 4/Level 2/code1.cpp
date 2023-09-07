// https://www.codechef.com/problems/PPATTERN

#include <bits/stdc++.h>
using namespace std;
int main()
{   int t;
cin>>t;
    while(t--){int n;
    cin>>n;
    int a[n + 1][n + 1];
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        int row = 1;
        int col = i;
        while (row <= n && col >= 0)
        {
            a[row++][col--] = count;
            count++;
        }
        count--;
    }
    count++;
    for (int j = 2; j <= n; j++)
    {
        int row = j;
        int col = n;
        while (row <= n && col >= 0)
        {
            a[row++][col--] = count++;
        }
        // count--;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (a[i][j] < 10)
                cout << a[i][j] << "  ";
            else
                cout << a[i][j] << " ";

        cout << endl;
    }}

    return 0;
}