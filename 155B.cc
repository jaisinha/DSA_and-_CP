#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].second >> a[i].first;
    }
    sort(a, a + n);
    int c = 0, k = 1;
    for (int i = n - 1; i >= 0 && k > 0; i--)
    {
        c += a[i].second;
        k += a[i].first - 1;
    }
    cout<<c;
}