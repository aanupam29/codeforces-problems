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

int main()
{
    fast;
    tc;
    ll n,m;
    w(t)
    {
        int n, m, i;
		cin >> n >> m;
		int t[n],lo[n],hi[n];
		for (i = 0; i < n; i++)
			cin >> t[i] >> lo[i] >> hi[i];
		int prev = 0;
		int mn = m, mx = m;
		bool flag = true;
		for (i = 0; i < n; i++)
		{
			mx += t[i] - prev;
			mn -= t[i] - prev;
			if (mx < lo[i] || mn > hi[i])
			{
				flag = false;
				break;
			}
			mx = min(mx, hi[i]);
			mn = max(mn, lo[i]);
			prev = t[i];
		}
		if (flag)
		{
			cy;
		}
		else
		{
			cn;
		}
    }
    return 0;
}
