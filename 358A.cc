#include<iostream>
using namespace std;
int main()
{
    long n,i,x=0,y=0,j;
    cin>>n;
    long a[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++){x=y=0;
    for(j=i+2;j<n;j++) 
    if ((a[j]>a[i]&&a[j]>a[i+1])||(a[j]<a[i]&&a[j]<a[i+1])) x++;
    else y++;
    if(x&&y){cout<<"yes";return 0;
    }}cout<<"no";return 0;
}