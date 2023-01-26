#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define cint const int
#define fo(number1, number2, number3) for (auto number1 = number2; number1 < number3; ++number1)
#define rfo(number1, number2, number3) for (int number1 = number2 - 1; number1 >= number3; --number1)
#define pi pair<int, int>
#define vLL vector<ll>
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#define lbd lower_bound
#define ubd upper_bound
#define mp make_pair
#define cps CLOCKS_PER_SEC
#define decimal(k) fixed << setprecision(k)
#define PI 3.14159265359
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ff first
#define ss second
#define all(V) (V).begin(), (V).end()
#define alla(a, n) a, a + n
#define sz(v) (ll) v.size()
#define SORT(v) sort(all(v))
#define REV reverse
#define SUM(v) accumulate(v.begin(), v.end(), 0)
#define MAX max_element
#define MIN min_element
#define UNIQUE(v) \
    SORT(v);      \
    v.erase(unique(v.begin(), v.end()), v.end())
#define UNIQUEA(a, n) unique(a, a + n) - a
#define MAXA(a, n) max_element(a, a + n)
#define MINA(a, n) min_element(a, a + n)
#define SORTA(a, n) sort(alla(a, n))
#define REVA(a, n) reverse(alla(a, n))
#define mem1(a) memset(a, -1, sizeof(a));
#define mem0(a) memset(a, 0, sizeof(a));
#define mymax 1000000000000000100
#define mymin -1000000001
#define bitcount __builtin_popcount
#define gcd __gcd
#define MOD (ll)1000000007
#define TEST(t) \
    int tc;     \
    cin >> tc;  \
    fo(t, 1, tc)
#define VECT(v, n) \
    ll n;          \
    cin >> n;      \
    vLL v(n);      \
    fo(i, 0, n - 1) cin >> v[i];
#define NUM(n) \
    ll n;      \
    cin >> n;
#define STRING(s) \
    string s;     \
    cin >> s;
#define TS to_string
#define len(s) (s).length()
#define line cout << "\n";
#define el "\n"
#define clkstart auto start = high_resolution_clock::now();
#define clkend                                \
    auto stop = high_resolution_clock::now(); \
    auto duration = duration_cast<microseconds>(stop - start);
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        ll m1;
        cin >> m1;
        vLL v(m1);
        map<ll, ll> m;
        ll ans = -1;
        for (auto &i : v)
        {
            cin >> i;
            m[i]++;
            ans = max(ans, m[i]);
        }
        SORT(v);









        
        int i = 0;
        vLL v1;
        int j = v.size() - 1;
        if (m.size() != v.size() && v.size() - ans <= 1)
            cout << "NO" << endl;
        else
        {
            while (i < j)
            {
                /* code */
                v1.pb(v[i]);
                v1.pb(v[j]);
                i += 1;
                j -= 1;
            }
            if (v.size() % 2 != 0)
                v1.pb(v[j]);
            int f = 0;
            fo(i, 1, v1.size() - 1)
            {
                if (v1[i] < v1[i + 1] && v1[i] < v1[i - 1] || v1[i] > v1[i + 1] && v1[i] > v1[i - 1])
                    f = 0;
                else
                    f = 1;
            }
            if (f == 1)
                cout << "NO" << endl;
            else
            {
                if (v1[v1.size() - 1] < v1[v1.size() - 2] && v1[i] < v1[0] || v1[v1.size() - 1] > v1[v1.size() - 2] && v[i] > v[0])
                {
                    cout << "YES" << endl;
                    fo(i, 0, v1.size())
                            cout
                        << v1[i] << " ";
                    line
                }
                else
                    cout << "NO" << endl;
            }
        }
    }
}
