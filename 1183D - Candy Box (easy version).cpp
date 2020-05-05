#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    int q;
	cin >> q;
	for(int t = 0; t < q; ++t) 
	{
		int n;
		cin >> n;
		vector<int> cnt(n + 1);
		for (int i = 0; i < n; ++i) 
		{
			int x;
			cin >> x;
			++cnt[x];
		}
		sort(cnt.rbegin(), cnt.rend());
		int ans = cnt[0];
		int lst = cnt[0];
		for (int i = 1; i <= n; ++i) 
		{
			if (lst == 0) break;
			if (cnt[i] >= lst) 
			{
				ans += lst - 1;
				lst -= 1;
			} 
			else 
			{
				ans += cnt[i];
				lst = cnt[i];
			}
		}
		cout << ans << endl;
	}
	return 0;
}
