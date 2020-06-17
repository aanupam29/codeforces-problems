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
    ll i,j,k;
    ll n,d,m;
    ll f,x;
    cin>>n>>d;
    pp a[n];
    for(i=0;i<n;i++)
    {
        cin>>m>>f;
        a[i]={m,f};
    }
    sort(a,a+n);
    ll pre[n+1],b[n];
    pre[0]=0;
    pre[1]=a[0].second;
    for(i=2;i<=n;i++)
    {
        pre[i]=(pre[i-1]+a[i-1].second);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i].first;
    }
    m=0;
    for(i=0;i<n;i++)
    {
        f=b[i]+d-1;
        j=upper_bound(b,b+n,f)-b;
        while(j>=1)
        {
            if(b[j-1]>f)
            {
                j--;
            }
            else
            {
                break;
            }
        }
        k = (pre[j]-pre[i]);
        m = max(m,k);
    }
    cout<<m;
    return 0;
}
