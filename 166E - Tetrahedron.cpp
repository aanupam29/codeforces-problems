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
#define M              1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

const int N = 10000001;
int dp[N][4];
int main()
{
	int i;
	int n, m;
	cin>>n;
	ll a, b, c, d, x;
	dp[1][0] = dp[1][1] = dp[1][2] = 1,  dp[1][3] = 0;
	for (i = 2; i <= n; i++)
	{
		a = dp[i - 1][0] % M; b = dp[i - 1][1] % M;
		c = dp[i - 1][2] % M; d = dp[i - 1][3] % M;
		x = b + c + d;
		dp[i][0] = x % M;
		x = a + c + d;
		dp[i][1] = x % M;
		x = a + b + d;
		dp[i][2] = x % M;
		x = a + b + c;
		dp[i][3] = x % M;
	}
	cout<<dp[n][3];
	return 0;
}
