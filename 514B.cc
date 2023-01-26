#include<bits/stdc++.h>
using namespace std;
double i,n,p,m,x,y,f=0;;
map<double,int> a;
int main()
{
	cin>>n>>x>>y;
	for(i=0;i<n;i++)
		{
			cin>>p>>m;
			if(x!=p)
			a[(y-m)/(x-p)]++;
			else f=1;
		}
		cout<<a.size()+f;
	return 0;
}