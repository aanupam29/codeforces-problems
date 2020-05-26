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

vector<vector<int> > edges;
vector<bool> visited;
int totalVisited(0);
void dfs(int node)
{
    if(visited[node])
    {
        return;
    }
    visited[node] = 1; 
    ++totalVisited;
    for(int p = 0; p < edges[node].size(); p++)
    {
        dfs(edges[node][p]);
    }
}
int main()
{
    int n, m; 
    scanf("%d %d\n", &n, &m);
    if(n != m)
    {
        puts("NO"); 
        return 0;
    }
    edges.resize(n + 1); visited.resize(n + 1);
    for(int p = 0; p < m; p++)
    {
        int a, b; 
        scanf("%d %d\n", &a, &b);
        edges[a].push_back(b); 
        edges[b].push_back(a);
    }
    dfs(1);
    if(totalVisited < n)
    {
        puts("NO");
    }
    else
    {
        puts("FHTAGN!");
    }
    return 0;
}
