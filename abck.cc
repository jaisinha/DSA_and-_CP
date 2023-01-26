#include <bits/stdc++.h>
using namespace std;
bool isSafe(int i, int j, int n, vector<vector<int>> &a, vector<vector<int>> &a1)
{
    if (i < n && j < n && a[i][j] == 1)
    {
        return true;
    }
    return false;
}
bool back(vector<vector<int>> &a, vector<vector<int>> &a1, int i, int j, int n)
{
    if (i == n - 1 && j == n - 1)
    {
        a1[i][j] = 1;
        return true;
    }
    if (isSafe(i, j, n, a, a1))
    {
        a1[i][j] = 1;
        if (back(a, a1, i + 1, j, n) == true)
            return true;
        if (back(a, a1, i, j + 1, n) == true)
            return true;
        a1[i][j] = 0;
        return false;
    }
    return false;
}
int main()
{
    vector<vector<int>> a(4, vector<int>(4, 0));
    vector<vector<int>> a1{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    back(a, a1, 0, 0, 4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << a1[i][j] << " ";
        cout << endl;
    }
}