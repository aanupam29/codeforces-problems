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
	cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> x[i];
	}
	sort(x.begin(), x.end());
	vector<int> res = {x[0]};
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 31; ++j) 
		{
			int lx = x[i] - (1 << j);
			int rx = x[i] + (1 << j);
			bool isl = binary_search(x.begin(), x.end(), lx);
			bool isr = binary_search(x.begin(), x.end(), rx);
			if (isl && isr && int(res.size()) < 3)
			{
				res = { lx, x[i], rx };
			}
			if (isl && int(res.size()) < 2)
			{
				res = { lx, x[i] };
			}
			if (isr && int(res.size()) < 2)
			{
				res = { x[i], rx };
			}
		}
	}
	cout << int(res.size());
	nl;
	for (auto it : res)
		cout << it << " ";
	return 0;
}
