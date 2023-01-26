#include <bits/stdc++.h>
#define vLL vector<ll>
#define ll long long int
#define pb push_back
#define fo(number1, number2, number3) for (auto number1 = number2; number1 < number3; ++number1)
using namespace std;
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll m;
        cin >> m;
        vLL v0(m);
        vLL v1;
        for (auto &i : v0)
            cin >> i;
        v1.pb(v0[0]);
        vLL v2(v0.begin(), v0.end());
        int f = 1;
        fo(i, 1, v0.size())
        {
            if (v2[i] + v0[i - 1] > 0 && v0[i - 1] - v2[i] > 0 && v2[i] != 0)
                f = 0;
            else
            {
                v1.pb(v0[i] + v0[i - 1]);
                v0[i] = v1[i];
            }
        }
        if (f == 0)
            cout << "-1" << endl;
        else
        {
            for (auto &i : v1)
                cout << i << " ";
            cout << endl;
        }
    }
}