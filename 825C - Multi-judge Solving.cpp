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

int main() 
{
    fast
    ll i,j,k;
    ll n,m,req;
    cin>>n>>m;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sa(a,n);
    ll count=0;
    for(i=0;i<n;i++)
    {
        req=(a[i]%2)+(a[i]/2);
        if(m>=req)
        {
            m=max(m,a[i]);
        }
        else
        {
            while(req > m)
            {
                count++;
                m*=2;
            }
            m=max(m,a[i]);
        }
    }
    cout<<count;
    return 0;
}
