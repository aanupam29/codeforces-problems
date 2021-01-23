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

int a[5][5];
int main()
{
	for(int i=0;i<4;i++) 
	{
		for(int j=0;j<4;j++)
		{
			cin>>a[i][j];
		}
	}
	int f = 0;
	int x = 0;
	int y = 0;
	for(int i=0;i<4;i++) 
	{
		if(a[i][0] == a[i][2]) 
		{
			x++;
			if(a[i][1] != a[i][3]) 
			{
			    continue;
			}
			else 
			{
				f = 1;
				break;
			}
		}
		if(a[i][1] == a[i][3]) 
		{
			y++;
			if(a[i][0] != a[i][2]) 
			{
			    continue;
			}
			else 
			{
				f = 1;
				break;
			}
		}
	}
	if(f) 
	{
	    cn;
		return 0;
	}
	if (!(x==2 && y==2))
	{
	    cn;
		return 0;
	}
	map<pair<int, int>, int> dp;
	for(int i=0;i<4;i++)
	{
		dp[{a[i][0], a[i][1]}]++;
		dp[{a[i][2], a[i][3]}]++;
	}
	f = 0;
	for(auto x:dp) 
	{
		if(x.second!=2) 
		{
			f = 1;
			break;
		}
	}
	if(f) 
	{
		cn;
		return 0;
	}
	cy;
	return 0;
}
