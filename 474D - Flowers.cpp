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
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

ll dp[100005];
int main()
{
	ll i, j, k;
	ll n, m;
	ll a,b;
	cin >> n >> k;
	memset(dp, 0, sizeof(dp));
	i = 1;
	while (i<k)
	{
		dp[i] = 1; i++;
	}
	dp[k] = 2;
	for (i = k+1; i < 100005; i++)
	{
		dp[i] = (dp[i - k] % mod + dp[i - 1] % mod) % mod;
	}
	for (i = 1; i < 100005; i++)
	{
		dp[i] = (dp[i] % mod + dp[i - 1] % mod)%mod;
	}
	for (i = 0; i < n; i++)
	{
		cin >> a >> b;
		k = (dp[b] - dp[a - 1]) % mod;
		if (k < 0)
		{
			k += mod;
		}
		cout << k << endl;
	}
	return 0;
}
