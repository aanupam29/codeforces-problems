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

int main() 
{
    fast
    int n;
    cin>>n;
    ll a[n];
    input(a,n)
    int cn1=0,cn2=0;
    ll x;
    vector<ll> sq,sqn;
    ff(i,0,n-1)
    {
        x = sqrt(a[i]);
        if(x*x == a[i])
        {
            cn1++;
            sq.pb(a[i]);
        }
        else
        {
            cn2++;
            sqn.pb(a[i]);
        }
    }
    sv(sq);
    if(cn1 == cn2)
    {
        cout<<"0";
        ret;
    }
    ll ans = 0;
    if(cn1 > cn2)
    {
        int k = (cn1 - cn2)/2;
        int l = sq.size() - 1;
        w(k)
        {
            if(sq[l] == 0)
            {
                ans += 2;
            }
            else
            {
                ans += 1;
            }
            l--;
        }
        cout<<ans;
        ret;
    }
    int k = (cn2 - cn1)/2;
    vector<ll> another;
    ll m;
    for(int i=0;i<sqn.size();i++)
    {
        x = sqrt(sqn[i]);
        m = x+1;
        x = x*x;
        m = m*m;
        x = min(sqn[i] - x , m - sqn[i]);
        another.pb(x);
    }
    sv(another);
    ff(i,0,k-1)
    {
        ans += another[i];
    }
    cout<<ans;
	return 0;
}
