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
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 100010

int color[N];
bool vis[N];
set<int> neighbour[N];
vector<int> adj[N];
void dfs(int s)
{
	vis[s] = 1;
	for (int e : adj[s])
	{
		if (color[e] != color[s])
		{
			neighbour[color[s]].insert(color[e]);
			neighbour[color[e]].insert(color[s]);
		}
		if (!vis[e])
			dfs(e);
	}
}
int main()
{
	int i, j, k;
	int n, m, p;
	map<int,bool> mp;
	scanf("%d%d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &color[i]), mp[color[i]] = 1;
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &j, &k);
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	memset(vis, 0, sizeof(vis));
	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			dfs(i);
		}
	}
	p = -1;
	int  ans = 0;
	for (i = 0; i < N; i++)
	{
		k = neighbour[i].size();
		if (p < k && mp[i])
		{
			p = neighbour[i].size();
			ans = i;
		}
	}
	printf("%d\n", ans);
	return 0;
}
