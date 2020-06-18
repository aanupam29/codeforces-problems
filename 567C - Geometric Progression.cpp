#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
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

map<ll, ll> rights, lefts;
ll a[200005];
main()
{
    ll n, k,ans=0;
    cin>>n>>k;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        rights[a[i]]++;
    }
    for(ll i=0;i<n;i++)
    {
        ll k1=0, k2=0;
        if(a[i]%k==0)
        {
            k1=lefts[a[i]/k];
        }
        rights[a[i]]--;
        k2= rights[a[i]*k];
        ans += k1*k2;
        lefts[a[i]]++;
    }
    cout<<ans<<endl;
}
