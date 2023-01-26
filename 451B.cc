#include <bits/stdc++.h>
#define ll long long int
#define fo(number1, number2, number3) for (int number1 = number2; number1 < number3; ++number1)
#define vLL vector<ll>
#define pb push_back
#define vi vector<int>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vi v;
    fo(i, 0, n)
    {
        int ele;
        cin >> ele;
        v.pb(ele);
    }
    vi v1 = v;
    vi v2;
    sort(v1.begin(), v1.end());
    set<int> s;
    if (v1 == v)
    {
        cout << "yes" << endl;
        cout << "1"
             << " "
             << "1";
    }
    else
    {
        fo(i,1,v1.size())
        {
            if(v[i-1]>v[i]){
                s.insert(i-1);
                s.insert(i);}
            else break;
        }
        for (auto it = s.begin(); it !=
                             s.end(); ++it)
        v2.pb(*it);
        reverse(v.begin()+v2[0],v.begin()+v2[v2.size()-1]+1);
        if(v==v1)
        {
            cout<<"yes"<<endl;
            cout<<v2[0]+1<<" "<<v2[v2.size()-1]+1;
        }
        else
        cout<<"no";

    }
}
