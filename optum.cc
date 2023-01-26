#include <bits/stdc++.h>
#define ll long long int
#define vLL vector<ll>
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define vi vector<int>
#define pb push_back
using namespace std;
int f(int n, vLL &v)
{
    int c = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < v.size(); j++)
        {
            sum += (v[i] + v[j]);
            if (((sum) & (sum - 1)) == 0)
            {
                
                c++;
            }
        }
    }
    return c;
}
int main()
{
    ll n;
    cin >> n;
    vLL v(n);
    for (auto &i : v)
        cin >> i;
    cout << f(n, v);
}