#include <bits/stdc++.h>
using namespace std;
string solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int n1;
        cin >> n1;
        for (int j = 0; j < n1; j++)
        {
            int ele;
            cin >> ele;
            v[i].push_back(ele);
        }
    }
    vector<int> solve;
    for (int i = 0; i < 6; i++)
        solve.push_back(0);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j != i)
            {
                for (auto &a : v[i])
                    solve[a] = 1;
                for (auto &a : v[j])
                    solve[a] = 1;
                int sum = accumulate(solve.begin(), solve.end(), 0);
                if (sum == 5)
                    return "YES";
                for (int i = 0; i < 6; i++)
                    solve[i] = 0;
            }
        }
    }
    return "NO";
}
int main()
{
    // your code goes here
    int n;
    cin >> n;
    while (n--)
    {
        cout << solve() << endl;
    }
    return 0;
}