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


#define N 100010
bool cyc;
vector<int> adj[N];
bool vis[N];
void dfs(int s, int p)
{
	vis[s] = 1;
	for (int e : adj[s])
	{
		if (e != p && !vis[e])
			dfs(e, s);
		else if (e != p && vis[e])
			cyc = 1;
	}
}
int main()
{
	int i, j, k;
	int n, m;
	int u, v;
	scanf("%d%d", &n, &m);
	for (i = 0; i < m; i++)
	{
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	memset(vis, 0, sizeof(vis));
	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		cyc = 0;
		if (!vis[i])
		{
			dfs(i, -1);
			if (!cyc)
				cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
