#include <bits/stdc++.h>
#define ll long long int
#define fo(number1, number2, number3) for (auto number1 = number2; number1 <= number3; ++number1)
#define rfo(number1, number2, number3) for (int number1 = number2; number1 >= number3; --number1)
#define pi pair<int, int>
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        string s;
        cin >> s;
        cout << abs((s[0] - 'a') - (s[s.length() - 1] - 'a'));
        vector<vector<int>> v;
        fo(i, 0, s.length())
            v[abs(s[i] - 'a')]
                .pb(i + 1);
        int m = 0;
        vi v1;
        if (s[0] < s[s.length() - 1])
        {
            fo(i, s[0] - 97, s[s.length() - 1] - 97)
            {
                int l = v[i].size();
                m += l;
                fo(j, 0, v[i].size())
                    v1.pb(v[i][j]);
            }
        }
        else if (s[0] > s[s.length() - 1])
        {
            rfo(i, s[0] - 97, s[s.length() - 1] - 97)
            {
                int l = v[i].size();
                m += l;
                fo(j, 0, v[i].size())
                    v1.pb(v[i][j]);
            }
        }
        cout << " " << m << endl;
        fo(i, 0, v1.size())
                cout
            << v1[i] << " ";
        cout << endl;
    }
}
