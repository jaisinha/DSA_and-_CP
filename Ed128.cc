#include <bits/stdc++.h>
#define ll long long int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
#define all(V) (V).begin(), (V).end()
#define alla(a, n) a, a + n
#define SORT(v) sort(all(v))
#define REV reverse
#define SUM(v) accumulate(v.begin(), v.end(), 0)

using namespace std;

// <-----------------------solution------------------------->
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        /* code */
        ll a, b, ans = INT_MAX;
        cin >> a >> b;
        int x = 0, y = 0;
        char c[a][b];
        fo(i, 0, a)
        {
            fo(j, 0, b)
            {
                cin >> c[i][j];
                if (c[i][j] == 'R')
                {
                    if (ans >= i + j)
                    {
                        ans = i + j;
                        x = i;
                        y = j;
                    }
                }
            }
        }
        int f = 1, f1 = 1;
        fo(i, 0, a)
        {
            fo(j, 0, b)
            {
                if (i != x || j != y)
                {
                    if (c[i][j] == 'R')
                    {
                        cout << "NO" << endl;
                        f = 0;
                        break;
                    }
                }
                else if (i == x && j == y)
                {
                    f1 = 0;
                    break;
                }
            }
            if (f == 0 || f1 == 0)
                break;
        }
        if (f == 1 || f1 == 0)
            cout << "YES" << endl;
    }
}
