// #include <bits/stdc++.h>
// #define ll long long int
// #define ull unsigned long long int
// #define cint const int
// #define fo(number1, number2, number3) for (auto number1 = number2; number1 < number3; ++number1)
// #define rfo(number1, number2, number3) for (int number1 = number2 - 1; number1 >= number3; --number1)
// #define pi pair<int, int>
// #define vLL vector<ll>
// #define vi vector<int>
// #define pb push_back
// #define ppb pop_back
// #define eb emplace_back
// #define lbd lower_bound
// #define ubd upper_bound
// #define mp make_pair
// #define cps CLOCKS_PER_SEC
// #define decimal(k) fixed << setprecision(k)
// #define PI 3.14159265359
// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// #define ff first
// #define ss second
// #define all(V) (V).begin(), (V).end()
// #define alla(a, n) a, a + n
// #define sz(v) (ll) v.size()
// #define SORT(v) sort(all(v))
// #define REV reverse
// #define SUM(v) accumulate(v.begin(), v.end(), 0)
// #define MAX max_element
// #define MIN min_element
// #define UNIQUE(v) \
//     SORT(v);      \
//     v.erase(unique(v.begin(), v.end()), v.end())
// #define UNIQUEA(a, n) unique(a, a + n) - a
// #define MAXA(a, n) max_element(a, a + n)
// #define MINA(a, n) min_element(a, a + n)
// #define SORTA(a, n) sort(alla(a, n))
// #define REVA(a, n) reverse(alla(a, n))
// #define mem1(a) memset(a, -1, sizeof(a));
// #define mem0(a) memset(a, 0, sizeof(a));
// #define mymax 1000000000000000100
// #define mymin -1000000001
// #define bitcount __builtin_popcount
// #define gcd __gcd
// #define MOD (ll)1000000007
// #define TEST(t) \
//     int tc;     \
//     cin >> tc;  \
//     fo(t, 1, tc)
// #define VECT(v, n) \
//     ll n;          \
//     cin >> n;      \
//     vLL v(n);      \
//     fo(i, 0, n - 1) cin >> v[i];
// #define NUM(n) \
//     ll n;      \
//     cin >> n;
// #define STRING(s) \
//     string s;     \
//     cin >> s;
// #define TS to_string
// #define len(s) (s).length()
// #define line cout << "\n";
// #define el "\n"
// #define clkstart auto start = high_resolution_clock::now();
// #define clkend                                \
//     auto stop = high_resolution_clock::now(); \
//     auto duration = duration_cast<microseconds>(stop - start);
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     while (n--)
//     {
//         ll m;
//         cin >> m;
//         vLL v(m);
//         for (auto &i : v)
//             cin >> i;
//         ll m1;
//         cin >> m1;
//         vLL v1(m1);
//         for (auto &i : v1)
//             cin >> i;
//         int mf = INT_MIN, me = 0;
//         int c=0;
//         for (int i = 0; i < v.size(); i++)
//         {
//             me = me + v[i];
//             if (mf < me)
//             {
//                 mf = me;
//                 c = i;
//             }
//             if (me < 0)
//                 me = 0;
//         }
//         fo(i, 0, v1.size())
//         {
//             if (v1[i] > 0)
//                 mf += v1[i];
//         }
//         cout << mf << endl;
//     }
// }
#STRINGS

Strings are considered a data type in general and are typically represented as >

    ##DECLARATION :

    ##Traversing a String :

    ## # `Naive Approach` : The simplest approach to solve this problem is to iterate a loop over the range >
                            * `Time Complexity : O(N)`
                                                     * `Auxiliary Space : O(1)`
```cpp
#include <iostream>
                                                                          using namespace std;
// Function to traverse the string and
// print the characters of the refernced string
void TraverseString(string &str, int N)
{
    // Traverse the string using naive approach
    for (int i = 0; i < N; i++)
    {
        cout << str[i] << " ";
    }
}
int main()
{
    string str = "LOVEYOUTHREETHOUSAND";
    // N stores length of the string

    int N = str.length();
    TraverseString(str, N);
    return 0;
}
```

### Reverse a string :thinking: :

* Using swap stl for exchanging the characters in the string
* **Complexity Analysis** :
* `Time Complexity: O(N)`
* `Auxiliary Space: O(1)`
```cpp
#include <iostream>

#include <algorithm>
using namespace std;
void reverseStr(string &str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
        // using #include <algorithm> that contain std::swap
    }
}
int main()
{
    string str = "gffg";
    reverseStr(str);
    cout << str;
    return 0;
}
```
