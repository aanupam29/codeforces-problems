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

typedef     pair<int,int>       ii;

const int MAXN = 1e5 + 3;
const int INF = INT_MAX;

vector<vector<ii> > adjList;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t)
{
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    fill(dist, dist+n+1, INF);
    pq.push(ii(0, s));
    dist[s] = 0;
    par[s] = -1;
    while(!pq.empty()) 
    {
        int u = pq.top().second; pq.pop();
        if(u == t) 
            return true;
        isDone[u] = true;
        for(auto &pr : adjList[u]) 
        {
            int v = pr.first, w = pr.second;
            if(!isDone[v] && dist[u] + w < dist[v]) 
            {
                dist[v] = dist[u] + w;
                pq.push(ii(dist[v], v));
                par[v] = u;
            }
        }
    }
    return false;
}
int main()
{
    int m;
    scanf("%d %d", &n, &m);
    adjList.resize(n+3);
    int u, v, w;
    while(m--) 
    {
        scanf("%d %d %d", &u, &v, &w);
        adjList[u].push_back(ii(v, w));
        adjList[v].push_back(ii(u, w));
    }
    if(dijkstra(1, n)) 
    {
        vector<int> path;
        for(v = n; v != -1; v = par[v]) 
            path.push_back(v);
        for(int i = path.size()-1; i > 0; --i) 
            printf("%d ", path[i]);
        printf("%d\n", path[0]);
    }
    else 
        puts("-1");
    return 0;
}
//20C
