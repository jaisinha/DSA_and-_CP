#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define cint const int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
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
#define TIME \
    line;    \
    line;    \
    cout << "Time taken by function: " << duration.count() / 1e6 << " seconds" << endl;
#define open {
#define close }
#define goog(tno) cout << "Case #" << tno << ": "
#define deb(x) cout << #x << " = " << x << el;
#define deb2(x, y) cout << #x << " = " << x << " : " << #y << " = " << y << el;
// #ifndef SEGMENTTREE_H
#define SEGMENTTREE_H
#define left(i) (2 * i + 1)
#define right(i) (2 * i + 2)
#define parent(i) ((i - 1) / 2)
// bool sortbysecdesc(const pair<int,int> &a,
//                    const pair<int,int> &b){return a.second>b.second;}
// sort(vect.begin(), vect.end(), sortbysecdesc);
using namespace std;
// bool is_perfect_square(ll n) {
//     if (n < 0)
//         return false;
//     ll root(round(sqrt(n)));
//     return n == root * root;
// }
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b, f = 1;
//         cin >> a >> b;
//         if (a == 1 && b == 0)
//             cout << "No" << endl;
//         else if (b == 1)
//             cout << "Yes" << endl;
//         else
//         {
//             if (a % 2 != 0 && b == 0)
//                 cout << "No" << endl;
//             else
//                 cout << "Yes" << endl;
//         }
//     }
// }
// 1)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         if (a < b)
//             cout << "0" << endl;
//         else
//             cout << a - b << endl;
//     }
// }
// 2)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         if (a % 6 == 0)
//             cout << (a / 6) * b << endl;
//         else
//             cout << (a / 6) * b + b << endl;
//     }
// }
// 3)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a, b;
//         cin >> a >> b;
//         if ((b - a) % 3 == 0 || (b - a) % 3 == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }
// }
// 4)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll m1, sum = 0;
//         cin >> m1;
//         string s, s1;
//         cin >> s >> s1;
//         map<char, int> m;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s1[i] == s[i])
//             {
//                 s.erase(s.begin() + i);
//                 s1.erase(s1.begin() + i);
//                 i -= 1;
//             }
//             else
//                 m[s1[i]]++;
//         }
//         for (auto &i : m)
//             sum += i.second;
//         ll n1 = s.length() - sum;
//         cout << n1 + m.size() << endl;
//     }
// }
// 5)
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         ll a;
//         cin >> a;
//         vLL v;
//         ll j = 0;
//         ll a1 = a;
//         fo(i, 0, a1)
//         {
//             if (i % 2 == 0)
//             {
//                 v.pb(a);
//                 {
//                     j += 1;
//                     a -= j;
//                 }
//             }
//             else
//             {
//                 if (i == 1)
//                     v.pb(i);
//                 else
//                     v.pb(i - 1);
//             }
//         }
//         reverse(v.begin(), v.end());
//         fo(i, 0, v.size())
//                 cout
//             << v[i] << " ";
//         line
//     }
// }
// 6)
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b, count = 0;
        cin >> a >> b;
        vLL v;
        ll n1 = abs(a - b);
        ll n = sqrt(abs(a - b));
        map<ll, int> m;
        for (int i = 1; i <= sqrt(abs(a - b)); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                    count++;
                else
                {
                    count += 1;
                    v.pb(n / i);
                }
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            count++;
        }
        cout << count << endl;
    }
}