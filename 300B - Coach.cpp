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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define MOD 1000000007
#define N 1000

int start;
int vis[N];
vector<int> adj[N];
vector<int> ans[20];
void dfs(int s)
{
	vis[s] = 1;
	for (int e : adj[s])
	{
		if (!vis[e])
		{
			ans[start].pb(e);
			dfs(e);
		}

		else if (vis[e] == 2)
		{
		    minus;
			exit(0);
		}
	}
}
int main()
{
	int i, j, k;
	int n, m;
	int u, v;
	cin>>n>>m;
	for (i = 0; i <m; i++)
	{
		cin>>u>>v;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	memset(vis, 0, sizeof(vis));
	start = 1;
	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			ans[start].pb(i);
			dfs(i);
			if (ans[start].size() > 3)
			{
				minus;
				return 0;
			}
			if (ans[start].size() >= 2)
			{
				for (int e : ans[start])
                {
    				vis[e] = 2;
                }
				start++;
			}
			else
			{
				for (int e : ans[start])
				{
					vis[e] = 0;
				}
				ans[start].clear();
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (adj[i].empty())
		{
			for (j = 1; j <= n/3; j++)
			{
				if (ans[j].size() != 3)
				{
					ans[j].pb(i);
					break;
				}
			}
		}
	}
	for (i = 1; i <= n / 3; i++)
	{
		if (ans[i].size() != 3) 
		{
		    minus;
			return 0;
		}
	}
	for (i = 1; i <= n / 3; i++)
	{
		printf("%d %d %d\n", ans[i][0], ans[i][1], ans[i][2]);
    }
	return 0;
}
