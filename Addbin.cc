#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    string sum;
    char next = '0';
    if (a.length() == b.length())
    {
        for (int i = a.length() - 1; i >= 0; i--)
        {
            if (a[i] == '0' && b[i] == '0')
            {
                if (next == '0')
                    sum += '0';
                else
                    sum += '1';
                next = '0';
            }
            else if (a[i] == '1' && b[i] == '0')
            {
                if (next == '0')
                {
                    sum += '1';
                    next = '0';
                }
                else
                {
                    sum += '0';
                    next = '1';
                }
            }
            else if (a[i] == '0' && b[i] == '1')
            {
                if (next == '0')
                {
                    sum += '1';
                    next = '0';
                }
                else
                {
                    sum += '0';
                    next = '1';
                }
            }
            else if (a[i] == '1' && b[i] == '1')
            {
                if (next == '0')
                    sum += '0';
                else
                    sum += '1';
                next = '1';
            }
        }
    }
    else
    {
        int c = 0;
        if (a.length() < b.length())
        {
            string temp = a;
            a = b;
            b = a;
        }
        int j = a.length() - 1;
        for (int i = min(a.length(), b.length()) - 1; i >= 0; i--)
        {
            if (a[j] == '0' && b[i] == '0')
            {
                if (next == '0')
                    sum += '0';
                else
                    sum += '1';
                next = '0';
                j -= 1;
            }
            else if (a[j] == '1' && b[i] == '0')
            {
                if (next == '0')
                {
                    sum += '1';
                    next = '0';
                }
                else
                {
                    sum += '0';
                    next = '1';
                }
                j -= 1;
            }
            else if (a[j] == '0' && b[i] == '1')
            {
                if (next == '0')
                {
                    sum += '1';
                    next = '0';
                }
                else
                {
                    sum += '0';
                    next = '1';
                }
                j -= 1;
            }
            else if (a[j] == '1' && b[i] == '1')
            {
                if (next == '0')
                    sum += '0';
                else
                    sum += '1';
                next = '1';
                j -= 1;
            }
            c = j;
        }
        // cout<<c;
        for (int i = c; i >= 0; i--)
        {
            if (a[i] == '0' && next == '0')
            {
                sum += '0';
                next = '0';
            }
            else if (a[i] == '1' && next == '0')
            {
                sum += '1';
                next = '0';
            }
            else if (a[i] == '0' && next == '1')
            {
                sum += '1';
                next = '0';
            }
            else if (a[i] == '1' && next == '1')
            {
                sum += '0';
                next = '1';
            }
        }
    }
    if (next == '1')
        sum += '1';
    reverse(sum.begin(), sum.end());
    cout << sum;
}