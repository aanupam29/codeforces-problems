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

const int inf = 100000005;
const int nax = 5005;
int degree[nax];
bool t[nax][nax];
int main() 
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; ++i) 
	{
		int a, b;
		scanf("%d%d", &a, &b);
		t[a][b] = t[b][a] = true;
		degree[a]++;
		degree[b]++;
	}
	int result = inf;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = i + 1; j <= n; ++j) 
		{
			if(t[i][j]) 
			{
				for(int k = j + 1; k <= n; ++k) 
				{
					if(t[i][k] && t[j][k])
						result = min(result , degree[i]+degree[j]+degree[k]);
				}
			}
		}
	}
	if(result == inf) 
	{
	    minus;
	}
	else
	{
	    cout<<(result - 6);
	}
	return 0;
}
