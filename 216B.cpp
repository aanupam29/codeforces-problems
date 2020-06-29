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
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 111

bool vis[N];
int adj[N][N], cross[N], color[N];
void dfs(int s, int n, int c)
{
	color[s] = c;
	vis[s] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (adj[s][i] && !vis[i])
		{
			dfs(i, n, !c);
		}
		else if (adj[s][i] && vis[i])
		{
			if (color[s] == color[i])
			{
				cross[i] = 1;
			}
		}
	}
}
int main()
{
	int i, j, k;
	int n, m;
	int x, y;
	memset(color, 0, sizeof(color));
	memset(cross, 0, sizeof(cross));
	memset(vis, 0, sizeof(vis));
	memset(adj, 0, sizeof(adj));
	cin >> n >> m;
	for (i = 0; i < m; i++)
	{
		cin >> j >> k;
		adj[j][k] = adj[k][j] = 1;
	}
	for (i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			dfs(i, n, 0);
		}
	}
	int cnt = 0;
	for (i = 1; i <= n; i++)
	{
		if (cross[i])
		{
			cnt++;
		}
	}
	cnt /= 2; 
	if ((n - cnt) % 2)
	{
		cnt++;
    }
	cout << cnt;
	return 0;
}
