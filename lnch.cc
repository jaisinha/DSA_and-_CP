#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n, i, c = 0;
        cin >> n;
        string m1;
        cin >> m1;
        for (i = 0; i < n; i++)
        {
            c++;
            if (m1[i + 1] == '1')
                break;
        }
        cout << c << endl;
    }
}