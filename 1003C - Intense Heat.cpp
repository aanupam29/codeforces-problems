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
#define forn(i,n)      for(int i=0;i<n;i++)
#define ld             double

const int N = 10000 + 7;
int n, k;
int a[N];
int pr[N];
void solve() 
{
	pr[0] = 0;
	forn(i, n) 
	    pr[i + 1] = pr[i] + a[i];
	ld ans = 0;
	forn(r, n) 
	{
    	forn(l, r + 1)
    	{
    		if (r - l + 1 >= k)
    		{
    			ans = max(ans, (pr[r + 1] - pr[l]) / ld(r - l + 1));
    		}
    	}
	}
	printf("%.15f\n", double(ans));
}
int main() 
{
	cerr.precision(15);
	cout.precision(15);
	cerr << fixed;
	cout << fixed;
	cin>>n>>k;
	forn(i, n) 
	{
	    cin>>a[i];
	}
	solve();
}
