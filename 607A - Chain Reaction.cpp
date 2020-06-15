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
#define N 1000005

int main()
{
	int n;
	cin >> n;
	map<int,int> meat;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin >> a >> b;
		meat[a]=b;
	}
	map<int,int> dp;
	for(int i=0;i<N;i++)
	{
		if(meat.find(i)!=meat.end())
		{
			dp[i]=dp[i-meat[i]-1]+1;
		}
		else
		{
			dp[i]=dp[i-1];
		}
	}
	int res=0;
	for(int i=0;i<N;i++)
	{
		res=max(res,dp[i]);
	}
	res=n-res;
	cout << res << endl;
}
