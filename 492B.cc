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
// bool isPrime(int n)
// {if (n <= 1)return false;
//     // Check from 2 to n-1
//     for (int i = 2; i < n; i++)
//         if (n % i == 0)
//             return false;
//     return true;}
// int)return 0;else return(b,a%b);}
bool sortbysecdesc(const pair<int, int> &a,
                   const pair<int, int> &b) { return a.first > b.first; }
// int main()
// {
//     fastio
//         ll a,
//         b;
//     cin >> a >> b;
//     int i = 0;
//     vector<pair<pair<string, int>, pair<string, int>>> v;
//     while (b--)
//     {
//         string s;
//         cin >> s;
//         string s1;
//         cin >> s1;
//         v.pb(make_pair(make_pair(s, s.length()), make_pair(s1, s1.length())));
//     }
//     string s3;
//     while (a--)
//     {
//         cin >> s3;
//         for (auto &it : v)
//         {
//             if (s3 == it.first.first)
//             {
//                 if (it.first.second > it.second.second)
//                     s3 = it.second.first;
//                 else
//                     s3 = it.first.first;
//             }
//             else if (s3 == it.second.first)
//             {
//                 if (it.first.second > it.second.second)
//                     s3 = it.second.first;
//                 else
//                     s3 = it.first.first;
//             }
//         }
//     }
//     cout << s3;
// }
int main()
{
    int n, l, count = 0, count1 = 0;
    float ans = 0;
    cin >> n >> l;
    vLL v(n);
    for (auto &i : v)
    {
        cin >> i;
        if (i == 0)
            count++;
        if(i==l)
            count1++;
    }
    sort(v.begin(), v.end());
    cout<<count<<endl;
    fo(i,0,v.size())
    cout<<v[i]<<" ";
    if (n == 1)
        cout << v[0] << fixed << setprecision(9);
    else
    {
            fo(i, 1, v.size())
            {
                float c = (float)v[i];
                float d = float(v[i - 1]);
                ans = max(ans, (c - d )/ 2);
            }
            cout<<max(float(v[0]),max(ans,float(l)-float(v[n-l])));
    }
}