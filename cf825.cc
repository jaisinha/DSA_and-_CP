#include <bits/stdc++.h>
#define ll long long int
#define vLL vector<ll>
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
    int nmkds;
    cin >> nmkds;
    while (nmkds--)
    {
        /* code */
        ll n1;
        cin >> n1;
        vLL v(n1);
        for (auto &i : v)
            cin >> i;
        vLL v1;
        v1.pb(v[0]);
        fo(i, 1, v.size())
        {
            if(v[i-1])
            v1.pb(v[i - 1] * v[i]);
            if (v.size() == v1.size())
            {
                v1.pb(v[v.size() - 1]);
                break;
            }
        }
        int f = 1;
        fo(i, 0, v1.size() - 1)
        {
            if (__gcd(v1[i], v1[i + 1]) != v[i])
            {
                f = 0;
                break;
            }
        }
        if (f == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
