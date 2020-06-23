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

int pb, pc, ps;
int nb, nc, ns;
int lb, lc, ls;
ll fb, fc, fs;
ll price(ll x)
{
	fb = max(x*lb - nb, (ll)0);
	fc = max(x*lc - nc, (ll)0);
	fs = max(x*ls - ns, (ll)0);
	ll p = fb*pb + fc*pc + fs*ps;
	return p;
}
int main()
{
	int i, j, k;
	int n, m;
	ll r;
	string s;
	cin >> s;
	n = s.length();
	lb = lc = ls = 0;
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'B')lb++;
		else if (s[i] == 'C')lc++;
		else ls++;
	}
	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;
	cin >> r;
	ll high, low, mid, z, ans = 0;
	low = 0, high = r + 1000, mid = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		z = price(mid);
		if (z == r)
		{
			cout << mid << endl;
			return 0;
		}
		if (z > r)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
			ans = mid;
		}
	}
	cout << ans << endl;
	return 0;
}
