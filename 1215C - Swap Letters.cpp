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
    int n;
    string s,t;
    cin>>n>>s>>t;
    vector<int> pos01, pos10;
	for (int i = 0; i < n; i++) 
	{
		if (s[i] != t[i]) 
		{
			if (s[i] == 'a') 
			{
				pos01.pb(i);
			} 
			else 
			{
				pos10.pb(i);
			}
		}
	}
	if (pos01.size() % 2 != pos10.size() % 2) 
	{
		cout << -1 << endl;
		return 0;
	}
	vector<pair<int, int> > ans;
	for (int i = 0; i + 1 < pos01.size(); i += 2) 
	{
		ans.pb({pos01[i], pos01[i + 1]});
	}
	for (int i = 0; i + 1 < pos10.size(); i += 2) 
	{
		ans.pb({pos10[i], pos10[i + 1]});
	}
	if (pos01.size() % 2) 
	{
		int x = pos01.back();
		int y = pos10.back();
		ans.pb({x,x});
		ans.pb({x,y});
	}
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i].first + 1 << ' ' << ans[i].second + 1 << endl;
	}
    return 0;
}
