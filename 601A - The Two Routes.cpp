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

int k;
int vs[500],d[500];
int g[500][500];
int n,m;
int bfs(int u)
{
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    d[u] = 0;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            int w = g[v][i];
            if(!vs[i] and w==k)
            {
                vs[i] = 1;
                q.push(i);
                d[i] = d[v] + 1;
            }
        }
    }
    return d[n];
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a][b] = 1;
        g[b][a] = 1;
    }
    k = g[1][n] ? 0 : 1;
    int ans = bfs(1); 
    if(vs[n])
    {
        co(ans);
    }
    else
    {
        puts("-1");
    }
	return 0;
}
