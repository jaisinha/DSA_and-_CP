#include <bits/stdc++.h>
using namespace std;
map<int, int> M;
int main()
{
    int n, x, y;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        M[x]++, M[y]++;
    }
    for (int i = 1; i <= 5; i++)
    {
        if (M[i] != 2)
        {
            puts("WIN");
            return 0;
        }
    }
    puts("FAIL");
}