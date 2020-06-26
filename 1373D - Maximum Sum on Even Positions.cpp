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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

ll msa(vector<ll>& a) 
{
	ll s = 0;
	ll best = 0;
	for (auto b : a) 
	{
		s = max(s + b, 0ll);
		best = max(best, s);
	}
	return best;
}
int main() 
{
	int t;
	cin >> t;
	while (t--)	
	{
		int n;
		cin >> n;
		vector<ll> a(n);
		ll s = 0;
		for (int i = 0; i < n; ++i) 
		{
			cin >> a[i];
			if (i % 2 == 0)
				s += a[i];
		}
		vector<ll> b1, b2;
		for (int i = 0; i + 1 < n; i += 2)
		{
			b1.push_back(a[i + 1] - a[i]);
		}
		for (int i = 1; i + 1 < n; i += 2)
		{
			b2.push_back(a[i] - a[i + 1]);
		}
		cout << s + max({ 0ll, msa(b1), msa(b2) }) << "\n";
	}
	return 0;
}
