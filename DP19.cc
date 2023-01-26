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
// bool sortbysecdesc(const vector<pair<int, int>> &a,const vector<pair<int, int>> &b)
// { return a.first > b.first; }
// sort(vect.begin(), vect.end(), sortbysecdesc);
using namespace std;
// bool is_perfect_square(ll n) {
//     if (n < 0)
//         return false;
//     ll root(round(sqrt(n)));
//     return n == root * root;
// }
// Basic Recursion
// int f(int n, vector<int> &v, int wt)
// {
//     if (n == 0)
//     {
//         if (wt - v[0] >= 0)
//             return v[0];
//     }
//     int a = -1e8;
//     if (wt >= v[n])
//         a = v[n][wt] + f(n - 1, v, wt - v[n]);
//     int b = 0 + f(n - 1, v, wt);
//     return max(a, b);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     f(n, v, wt);
// }
// =====================================================>
// Memoisation
// int f(int n, vector<vector<int>> &v, int wt, vector<vector<int>> &dp)
// {
//     if (dp[n][wt] != -1)
//         return dp[n][wt];
//     if (n == 0)
//     {
//         if (wt - v[0] >= 0)
//             return v[0];
//     }
//     int a = -1e8;
//     if (wt >= v[n])
//         a = v[n][wt] + f(n - 1, v, wt - v[n]);
//     int b = 0 + f(n - 1, v, wt);
//     return dp[n][wt] = max(a, b);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> v = {{10, 2}, {20, 1}, {30, 5}, {40, 3}};
//     vector<vector<int>> dp(n, vector<int>(n, -1));
//     cout << f(n, v, 8, dp);
// }
// ===========================================================>