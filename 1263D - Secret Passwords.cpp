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

const int N = (int)2e5 + 100;
vector<int> g[N];
char used[N];
void addEdge(int v, int u) 
{
	g[v].push_back(u);
	g[u].push_back(v);
}
void dfs(int v) 
{
	used[v] = 1;
	for (int to : g[v]) 
	{
		if (!used[to]) 
		{
			dfs(to);
		}
	}
}
int main() 
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		string s;
		cin >> s;
		for (char c : s) 
		{
			addEdge(i, n + c - 'a');
		}
	}
	int res = 0;
	for (int i = n; i < n + 26; i++) 
	{
		if (!g[i].empty() && !used[i]) 
		{
			dfs(i);
			res++;
		}
	}
	cout << res;
	return 0;
}
