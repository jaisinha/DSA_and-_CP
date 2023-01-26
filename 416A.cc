#include<bits/stdc++.h>
using namespace std;
int n,b;
string a,c;
int main()
{
cin>>n;int l=-2e9,r=2e9;
for (int i=0;i<n;i++)
  {
  cin>>a>>b>>c;
  if (a==">"&&c=="Y"||a=="<="&&c=="N") l=max(l,b+1);
  else if (a==">="&&c=="Y"||a=="<"&&c=="N") l=max(l,b);
  else if (a=="<"&&c=="Y"||a==">="&&c=="N") r=min(r,b-1);
  else r=min(r,b);
  }
if (l>r) cout<<"Impossible";
else cout<<l;
}