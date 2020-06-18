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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
    int SZ = 1005;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll c[SZ][SZ];
	for(ll i=0;i<SZ;i++)
	{
		for(ll j=0;j<=i;j++)
		{
			if(j==0)
			{
			    c[i][j] = 1;
			}
			else
			{
				c[i][j] = (c[i-1][j] + c[i-1][j-1])%MOD;	
			}
		}
	}
	ll n;
	cin>>n;
	ll total = 0;
	ll ans = 1;
	while(n--)
	{
		ll x;
		cin>>x;
		ans = (ans*c[total+x-1][x-1])%MOD;
		total += x;
	}
	cout<<ans<<"\n";
}
