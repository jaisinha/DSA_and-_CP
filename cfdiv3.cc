#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n1;
	cin>>n1;
	while(n1--)
	{
		int c=0;
		string s;
		cin>>s;
		map<char,int>m;
		for(int i=0;i<s.length();i++)
		{
			m[s[i]]++;
			if(m[s[i]]==2){
				c-=2;
				m.clear();
			}
			c++;
		}
		cout<<c<<endl;
	}
}