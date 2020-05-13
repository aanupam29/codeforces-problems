#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

typedef long long ll;
const ll INF=(1LL<<60)-1;
ll a[55],b[55];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        ci(a[i]);
    }
    for(int i=1;i<=m;i++)
    {
        ci(b[i]);
    }
    ll res=INF;
    for(int i=1;i<=n;i++)
    {
        ll now=-INF;
        for(int j=1;j<=n;j++)
            if(j!=i)
                for(int k=1;k<=m;k++)
                    now=max(now,a[j]*b[k]);
            res=min(res,now);
    }
    co(res);
    return 0;
}
