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

vector<ll> adj[100002];
vector<ll> ans;

void dfs(ll node,vector<ll> &val, vector<ll> &g, ll par,int f,ll f1,ll f2)
{
	if(!f)
	{
		if(f1%2)
		{
			val[node] = 1-val[node];
		}
		if(val[node] != g[node])
		{
			val[node] = g[node];
			f1++;
			ans.push_back(node);
		}
	}
	else
	{
		if(f2%2)
		{
			val[node] = 1-val[node];
		}
		if(val[node] != g[node])
		{
			val[node] = g[node];
			ans.push_back(node);
			f2++;
		}
	}
	for(ll child:adj[node])
	{
		if(child != par)
		{
			dfs(child,val,g,node,1-f,f1,f2);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  	ll n;
  	cin>>n;
  	for(int i=0;i<n-1;i++)
  	{
  		ll u,v;
  		cin>>u>>v;
  		u--;
  		v--;
  		adj[u].push_back(v);
  		adj[v].push_back(u);
  	}
  	vector<ll> val(n);
  	vector<ll> g(n);
  	for(int i=0;i<n;i++)
  	{
  	    cin>>val[i];
  	}
  	for(int i=0;i<n;i++)
  	{
  	    cin>>g[i];
  	}
  	int f = 0;
  	dfs(0,val,g,0,f,0,0);
  	cout<<ans.size();
  	nl;
  	for(ll i=0;i<ans.size();i++)
  	{
  		cout<<ans[i]+1;
  		nl;
  	}
}
