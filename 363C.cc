#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i + 1] == s[i + 2] && i + 2 < s.size() || s[i + 2] == s[i + 3] && i + 3 < s.size())
            {
                s.erase(s.begin() + i + 2);
                i--;
            }
        }
    }
    cout << s;
}
