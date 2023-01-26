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
// <--------------------------Solution------------------------------->
int main()
{
    ll n;
    cin >> n;
    vector<string> v;
    vector<string> v1;
    vector<string> v2;
    while (n--)
    {
        ll m1;
        string s;
        cin >> m1;
        cin >> s;
        ll countT = 0, countG = 0, countP = 0;
        while (m1--)
        {
            map<int, int> m;
            ll countT = 0, countG = 0, countP = 0, f = 1;
            string s1;
            cin >> s1;
            fo(i, 0, s1.length())
                m[s1[i]]++;
            if (m.size() == 2)
                countT++;
            else
            {
                fo(i, 0, s.length())
                {
                    if (s[i] != '-' && s[i + 1] != '-')
                    {
                        if (s[i] - '0' < s[i + 1] - '0')
                        {
                            f = 0;
                            countG++;
                            break;
                        }
                    }
                }
                if (f == 1)
                    countP++;
                f = 1;
            }
        }
        int i = 0;
        int ansT = 0, ansP = 0, ansG = 0;
        if (ansT < countT)
        {
            while (v.size() != 0)
                v.erase(v.begin() + i);
            ansT = countT;
            v.pb(s);
        }
        else if(ansT==countT)
            v.pb(s);    
        i = 0;
        if (ansG < countG)
        {
            while (v1.size() != 0)
                v1.erase(v1.begin() + i);
            ansG = countG;
            v1.pb(s);
        }
        else if(ansG==countG)
            v1.pb(s);
        else
        {
            while (v1.size() != 0)
                v1.erase(v1.begin() + i);
        }
        i = 0;
        if (ansP < countP)
        {
            while (v2.size() != 0)
                v2.erase(v2.begin() + i);
            ansG = countG;
            v2.pb(s);
        }
        else if(ansP==countP)
            v2.pb(s);
        else
        {
            while (v2.size() != 0)
                v2.erase(v2.begin() + i);
        }
    }
    cout << "If you want to call a taxi, you should call:"
         << " ";
    for (auto &i : v)
        cout << i << ", ";
    cout << '.' << endl;
    cout << "If you want to order a pizza, you should call:"
         << " ";
    for (auto &i : v2)
        cout << i << " ";
    cout << '.' << endl;
    cout << "If you want to go to a cafe with a wonderful girl, you should call:"
         << " ";
    for (auto &i : v1)
        cout << i << " ";
    cout << '.' << endl;
}
