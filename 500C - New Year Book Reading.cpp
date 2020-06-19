#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
    int n,m;
    cin>>n>>m;
    int w[n+3];
    for(int i=1; i<=n; i++)
    {
        cin>>w[i];
    }
    int a[m+5];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    for(int i=0; i<m; i++)
    {
        int vis[504];
        memset(vis,0,sizeof vis);
        for(int j=i-1; j>=0; j--)
        {
            if(vis[a[j]]) 
            {
                continue;
            }
            if(a[j]==a[i])
            {
                break;
            }
            vis[a[j]] = 1;
            sum += w[a[j]];
        }
    }
    cout<<sum;
}
