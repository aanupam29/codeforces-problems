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
    int n;
    cin>>n;
    ll a[n+1];
    ff(i,1,n)
    {
        cin>>a[i];
    }
    ll sum[n+1] = {0};
    sum[1] = a[1];
    ff(i,2,n)
    {
        sum[i] += sum[i-1] + a[i];
    }
    sort(a+1,a+n+1);
    ll ans[n+1] = {0};
    ans[1] = a[1];
    ff(i,2,n)
    {
        ans[i] += ans[i-1] + a[i];
    }
    int m;
    cin>>m;
    int c,l,r;
    w(m)
    {
        cin>>c>>l>>r;
        if(c == 1)
        {
            cout<<sum[r]-sum[l-1];
        }
        else
        {
            cout<<ans[r]-ans[l-1];
        }
        nl;
    }
	return 0;
}
