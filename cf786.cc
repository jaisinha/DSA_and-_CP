#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,t;
		cin>>s>>t;
		if(t=="a")
		cout<<1<<endl;
		else if(find(t.begin(),t.end(),'a')!=t.end())
		cout<<-1<<endl;
		else{
			long long ans=pow(2,s.length());
			cout<<ans<<endl;
		} 
	}
}