#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int tmp = 1;
        for (int j = i - 1; j >= 0; j--)
            if (a[j] <= a[j + 1])
                tmp++;
            else
                break;
        for (int k = i + 1; k < n; k++)
            if (a[k] <= a[k - 1])
                tmp++;
            else
                break;
        if (tmp > ans)
            ans = tmp;
    }
    cout << ans << endl;
}
