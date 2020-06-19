#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";  
#define N              100015

int color[N];
vector<int> adj[N];
stack<int> st;
void dfs(int s)
{
	if (!color[s])
	{
		color[s] = 1; 
		for (int e : adj[s])
			dfs(e);
		color[s] = 2;
		st.push(s);
	}
	else if (color[s] == 1)
	{
		cout << "Impossible\n";
		exit(0);
	}
}
int main()
{
	int i, j, k;
	int n, m, p;
	cin >> n;
	string *s = new string[n];
	for (i = 0; i < n; i++)
		cin >> s[i];
	for (i = 1; i < n; i++)
	{
		k = 0;
		m = min(s[i].length(), s[i - 1].length());
		for (j = 0; j < m; j++)
		{
			if (s[i][j] != s[i - 1][j])
			{
				k = 1;
				adj[s[i-1][j] - 'a'].push_back(s[i][j] - 'a');
				break;
			}
		}
		if (!k)
		{
			if (s[i].length() < s[i - 1].length()) 
			{
				cout << "Impossible\n";
				return 0;
			}
		}
	}
	memset(color, 0, sizeof(color));
	for (i = 0; i < 26; i++)
	{
		if (!color[i])
			dfs(i);
	}
	while (!st.empty())
	{
		cout << (char)(st.top()+'a');
		st.pop();
	}
	return 0;
}
