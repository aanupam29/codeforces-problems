#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

const int INF = (int)1e9;
const int N = 3222;
int n;
int ans = INF;
int a[N][2];
int main()
{
	ci(n);
	for (int k = 0; k < 2; k++)
	{
		for (int i = 0; i < n; i++)
		{
			ci(a[i][k]);
		}
	}
	for (int i = 0; i < n; i++) 
	{
		int b = -1;
		int cost = a[i][1];
		for (int j = 0; j < i; j++) 
		{
			if (a[j][0] >= a[i][0]) 
			    continue;
			if (b == -1 || a[b][1] > a[j][1])
				b = j;
		}
		if (b == -1) 
		    continue;
		cost += a[b][1];
		b = -1;
		for (int j = i + 1; j < n; j++) 
		{
			if (a[j][0] <= a[i][0]) 
			    continue;
			if (b == -1 || a[b][1] > a[j][1])
				b = j;
		}
		if (b == -1) 
		    continue;
		cost += a[b][1];
		ans = min(ans, cost);
	}
	if (ans == INF)
	{
		minus;
	}
	else
	{
		co(ans);
	}
	return 0;
}
