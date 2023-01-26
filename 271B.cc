#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxe = 1000005;
int A[550], B[550], a[550][550];
bool prime[maxe];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i * i <= maxe; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= maxe; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int n, m;
    cin >> n >> m;
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            k = a[i][j];
            while (prime[k] == false)
            {
                k++;
            }
            A[i] += (k - a[i][j]);
            B[j] += (k - a[i][j]);
        }
    }
    cout << min(*min_element(A, A + n), *min_element(B, B + m));
}