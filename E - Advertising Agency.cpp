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
#define vi             vector<ll>
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

ll C[1005][1005];
void ncr()
{
    for(int i=1; i<=1000; ++i)
    {
        C[i][0] = C[i][i] = 1;
        for(int j=1; j<i; ++j)
        {
            C[i][j] = (C[i-1][j-1] + C[i-1][j])%mod;
        }
    }
}
int main()
{
    fast;
    ncr();
    ll n,t,k,a;
    cin>>t;
    w(t)
    {
        cin>>n>>k; 
        ll ans=0; 
        map<ll,ll> freq; 
        vi v;
        for(int i=0;i<n;i++)
        {
                cin>>a;
                if(!freq[a])
                {
                    v.pb(a);
                }
                freq[a]++;
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            if(freq[v[i]] >= k)
            {
                ans += C[freq[v[i]]][k];
                break;
            }
            else
            {
                k -= freq[v[i]];
            }
        }
        cout<<ans;
        nl;
    }
    return 0;
}
