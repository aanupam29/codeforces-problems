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
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

const int MAXN = 110;
int n, a[MAXN], ans;
int main()
{
	cin >> n;
	if (n <= 2 || n % 2 == 0)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
	}
	for (int i = n ; i >= 2 ; i--)
	{
		while (a[i] && (i & 1))
		{
			int x = (i-1)/2;
			a[i]--;
			a[x] -= (a[x]) ? 1 : 0;
			a[2*x] -= (a[2*x]) ? 1 : 0;
			ans++;
		}
		while (a[i] && i % 2 == 0)
		{
			int x = i/2;
			a[i]--;
			a[x] -= (a[x]) ? 1 : 0;
			a[2*x+1] -= (a[2*x+1]) ? 1 : 0;
			ans++;
		}
	}
	ans += a[1];
	cout << ans << endl;
	return 0;
}
