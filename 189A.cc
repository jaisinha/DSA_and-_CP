
int main()
{
    ll n, count = 0;
    cin >> n;
    int a, b, c;
    cin >>a>>b>>c;
    int ans=1;
    fo(i,0,4000)
    {
        fo(j,0,4000)
        {
              int e=n-a*i-b*j;
              if(e>=0 &&e%c==0)
              ans=max(ans,i+j+e/c);
        }
    }
    cout<<ans;
}