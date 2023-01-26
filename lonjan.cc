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
bool sortbysecdesc(const pair<int, int> &a,
                   const pair<int, int> &b) { return a.first > b.first; }
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// brute
// int main()
// {
//     ll y, k, n;
//     cin >> y >> k >> n;
//     vLL v; //S.C(O(n))
//     if (y < n)
//     {
//         for (int i = k; i <= n-y; i++)  // T.C(O(n))
//         {
//                 if ((i + y) % k == 0)
//                     v.pb(i);
//         }
//         fo(i, 0, v.size())
//                 cout
//             << v[i] << " ";
//     }
//     else
//         cout << "-1";
// }
// Question 1
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         vLL v;
//         vLL v1;
//         ll sum = 0, sum1 = 0;
//         fo(i, 0, 3)
//         {
//             ll ele;
//             cin >> ele;
//             sum += ele;
//             v.pb(ele);
//         }
//         fo(i, 0, 3)
//         {
//             ll ele;
//             cin >> ele;
//             sum1 += ele;
//             v1.pb(ele);
//         }
//         if (sum > sum1)
//             cout << "DRAGON" << endl;
//         else if (sum1 > sum)
//             cout << "SLOTH" << endl;
//         else
//         {
//             int i = 0;
//             while (i != 3)
//             {
//                 if (v[i] > v1[i])
//                 {
//                     cout << "DRAGON" << endl;
//                     break;
//                 }
//                 else if (v[i] < v1[i])
//                 {
//                     cout << "SLOTH" << endl;
//                     break;
//                 }
//                 i++;
//             }
//             if (i == 3)
//                 cout << "TIE" << endl;
//         }
//     }
// }
// Question 2
// int main()
// {
//     ll n;
//     cin >> n;
//     while (n--)
//     {
//         vLL v;
//         ll sum=0;
//         ll a,b;
//         cin>>a>>b;
//         fo(i,0,a)
//         {
//             ll ele;
//             cin>>ele;
//             sum+=ele;
//             v.pb(ele);
//         }
//         sort(v.begin(),v.end(),greater<int> ());
//         int count=0,sum1=0;
//         if(sum>=b)
//         {
//            fo(i,0,v.size())
//            {
//                count++;
//                sum1+=v[i];
//                if(sum1>=b)
//                break;
//            }
//            cout<<count<<endl;
//         }
//         else
//         cout<<"-1"<<endl;
//     }
// }
// Question 3
int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll n1;
        cin >> n1;
        int A[3][3];
        fo(i, 0, 3)
        {
            fo(j, 0, 3)
                    cin >>
                A[i][j];
        }
        int a=A[0][1] + A[0][2] + A[1][2];
        int b=A[1][0] + A[2][0] + A[2][1];
        cout << max(a,b) << endl;
    }
}