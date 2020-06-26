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

const int N = 1e5 + 5;
ll a[N], b[N];
int query[N];
struct op
{
	ll l, r, d;
};
op f[N];
int32_t main()
{	
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++)
	{
	    cin >> a[i];
	}
	for(int i = 1; i <= m; i++) 
	{
		cin >> f[i].l >> f[i].r >> f[i].d;
	}
	for(int i = 0; i < k; i++)
	{
		int x, y;
		cin >> x >> y;
		query[x]++;
		query[y + 1]--;
	}          
	for(int i = 1; i <= m; i++) 
	{
	    query[i] += query[i - 1];
	}
	for(int i = 1; i <= m; i++)
	{
		b[f[i].l] += f[i].d * query[i];
		b[f[i].r + 1] -= f[i].d * query[i];
	}
	for(int i = 1; i <= n; i++) 
	{
	    b[i] += b[i - 1];
	    a[i] += b[i];
	}
	for(int i = 1; i <= n; i++)
	{
	    cout << a[i] << " ";
	}
    return 0;
}
