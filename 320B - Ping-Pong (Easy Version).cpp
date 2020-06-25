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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int a[111],b[111];
bool f[111];
int n = 0;
void dfs(int i)
{
    f[i] = true;
    for(int k = 1; k <= n;k++)
    {
        if(f[k])
        {
            continue;
        }
        if(a[i]>a[k] && a[i]<b[k])
        {
            dfs(k);
        }
        else if(b[i]>a[k] && b[i]<b[k])
        {
            dfs(k);
        }
    }
}
int k;
int main()
{
    cin >> k;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(f,0,sizeof(f));
    for(int i = 1; i <= k; i++)
    {
        int x,y,m;
        cin >> m;
        if(m == 1)
        {
            n++;
            cin >> a[n];
            cin >> b[n];
        }
        if(m == 2)
        {
            cin >> x;
            cin >> y;
            memset(f,0,sizeof(f));
            dfs(x);
            if(f[y])
            {
                cy;
            }
            else
            {
                cn;
            }
        }
    }
    return 0;
}
