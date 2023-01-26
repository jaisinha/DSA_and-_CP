#include <bits/stdc++.h>
#define ll long long int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define vi vector<int>
#define pb push_back
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define all(V) (V).begin(), (V).end()
#define SORT(v) sort(all(v))
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
int solve()
{
    ll n;
    cin >> n;
    vi v(n);
    ll m, count = 0;
    cin >> m;
    for (auto &i : v)
        cin >> i;
    if (v.size() < 3)
    {
        if (v.size() == 1)
        {
            if (m == 0)
                return 1;
            else
                return 0;
        }
        else if (v.size() == 2)
        {
            vi v1 = v;
            vi v2 = v1;
            SORT(v2);
            if (v2 == v1 && v1[0] != v2[1] && m == 0)
                return 1;
            return 0;
        }
    }
    // vi &v4=v;
    fo(i, 0, v.size())
    {
        fo(j, i, v.size() - 2)
        {
            vi &v1 = v;
            v1[j] = v1[j] + v1[j + 1] + v1[j + 2];
            v1.erase(v1.begin() + j + 1);
            v1.erase(v1.begin() + j + 1);
            vi &v2 = v1;
            SORT(v2);
            if (v2 == v1)
            {
                v[j] = v[j] + v[j + 1] + v[j + 2];
                j += 3;
                // v4[j]=v[j];
                // v4.erase(v4.begin() + j + 1);
                // v4.erase(v4.begin() + j + 1);
                count++;
            }
        }
    }
    vi &v3 = v;
    SORT(v3);
    if (count == m && v3 == v && v.size() == v3.size())
        return 1;
    return 0;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        if (solve() == 1)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}

// 1
// 5
// 1
// 6 2 10 8 6