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

int n,m,a,x;
vector<int>v[201];
bool vis[201];
void dfs(int s)
{
	for(int i=0;i<v[s].size();i++)
	{
		if(!vis[v[s][i]])
		{
			vis[v[s][i]]=1;
			dfs(v[s][i]);
		}
	}
}
int main()
{
	cin>>n>>m;
	bool can=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		can=(a|can);
		for(int j=0;j<a;j++)
		{
			cin>>x;
			v[i].push_back(x+n-1);
			v[x+n-1].push_back(i);
		}
	}
	int ans=-can;
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
			vis[i]=1;
			dfs(i);
			ans++;
		}
	}
	cout<<ans;
}
