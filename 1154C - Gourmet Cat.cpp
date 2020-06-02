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
    vi a(3);
	cin >> a[0] >> a[1] >> a[2];
	vi idx({0, 1, 2, 0, 2, 1, 0});
	int full = min({a[0] / 3, a[1] / 2, a[2] / 2});
	a[0] -= full * 3;
	a[1] -= full * 2;
	a[2] -= full * 2;
	int ans = 0;
	for (int start = 0; start < 7; ++start) 
	{
		int day = start;
		vi b = a;
		int cur = 0;
		while (b[idx[day]] > 0) 
		{
			--b[idx[day]];
			day = (day + 1) % 7;
			++cur;
		}
		ans = max(ans, full * 7 + cur);
	}
	cout << ans << endl;
	return 0;
}
