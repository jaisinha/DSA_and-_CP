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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        int m;
        cin >> m;
        vi v1;
        vi v2;
        vector<string> v;
        vi v1d;
        vi v2d;
        vector<string> vd;
        while (m--)
        {
            /* code */
            string s;
            cin >> s;
            v.push_back(s);
            vd.push_back(s);
            int n1;
            cin >> n1;
            v1.pb(n1);
            v1d.pb(n1);
            int m1;
            cin >> m1;
            v2.pb(m1);
            v2d.pb(m1);
        }
        SORT(vd);
        SORT(v2d);
        SORT(v1d);
        int a[1000000] = {0};
        int count = v.size();
        fo(i, 0, v.size())
        {
            if (v[i] != vd[i])
            {
                a[i]++;
                count -= 1;
            }
        }
        fo(i, 0, v.size())
        {
            if (v1[i] != v1d[i] && a[i] == 0)
            {
                a[i]++;
                count -= 1;
            }
        }
        fo(i, 0, v.size())
        {
            if (v2[i] != v2d[i] && a[i] == 0)
            {
                a[i]++;
                count -= 1;
            }
        }
        cout << count;
    }
}
