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

long long binpow(long long a, long long b)
{
	long long res = 1;
	while(b>0){
		if(b&1) res = (res * a)%MOD;
		a = (a*a)%MOD;
		b >>= 1;
	}
	return res%MOD;
}
int main()
{
	string s; 
	cin>>s;
	ll ans = 0; ll a = 0; ll b = 0;
	for(int i = 0; i < s.size(); i++)
	{
		if(i-1 >= 0) if(s[i] == 'a' && s[i-1] == 'b') 
		{
			ans += (b*(binpow(2,a)-1));
			b = 0;
		}
		if(s[i] == 'a') a++;
		else b++;
		ans %= MOD;
	}
	ans += (b*(binpow(2,a)-1));
	ans %= MOD;
	cout<<ans;
	
}
