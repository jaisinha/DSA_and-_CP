#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n1;
    cin >> n1;
    vector<int> v(n1);
    for (auto &i : v)
        cin >> i;
    int c = 0, c1 = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) == 2)
        {
            c++;
        }
        else if (abs(v[i] - v[i + 1]) > 2)
        {
            c1++;
        }
    }
    if (c > 0 && c1 > 0)
        return 0;
    else if (c > 2)
        return 0;
    else if (c1 > 1)
        return 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i + 1]) > 3)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        if (solve() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}