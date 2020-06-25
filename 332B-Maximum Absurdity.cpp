#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+1],pre[n+1];
    pre[0]=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        pre[i]=pre[i-1]+a[i];
    }
    ll dp[n+1],ind[n+1];
    dp[k]=pre[k];
    ind[k]=1;
    for(ll i=k+1;i<=n;i++)
    {
        if(pre[i]-pre[i-k]>dp[i-1])
        {
            dp[i]=pre[i]-pre[i-k];
            ind[i]=i-k+1;
        }
        else
        {
            dp[i]=dp[i-1];
            ind[i]=ind[i-1];
        }
    }
    ll sum=LLONG_MIN;
    ll ind1,ind2;
    for(ll i=2*k;i<=n;i++)
    {
        if(dp[i-k]+pre[i]-pre[i-k]>sum)
        {
            sum=dp[i-k]+pre[i]-pre[i-k];
            ind1=ind[i-k];
            ind2=i-k+1;
        }
    }
    cout<<ind1<<" "<<ind2;
    return 0;
}
