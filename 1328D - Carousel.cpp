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

int solve() 
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) 
	{
		cin >> a[i];
	}
	if (count(a.begin(), a.end(), a[0]) == n) 
	{
		cout << 1 << endl;
		for (int i = 0; i < n; ++i) 
		{
			cout << 1 << " ";
		}
		cout << endl;
		return 0;
	}
	if (n % 2 == 0) 
	{
		cout << 2 << endl;
		for (int i = 0; i < n; ++i) 
		{
			cout << i % 2 + 1 << " ";
		}
		cout << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i) 
	{
		if (a[i] == a[(i + 1) % n]) 
		{
			vector<int> ans(n);
			for (int j = 0, pos = i + 1; pos < n; ++pos, j ^= 1) 
			{
				ans[pos] = j + 1;
			}
			for (int j = 0, pos = i; pos >= 0; --pos, j ^= 1) 
			{
				ans[pos] = j + 1;
			}
			cout << 2 << endl;
			for (int pos = 0; pos < n; ++pos) {
				cout << ans[pos] << " ";
			}
			cout << endl;
			return 0;
		}
	}
	cout << 3 << endl;
	for (int i = 0; i < n - 1; ++i) 
	{
		cout << i % 2 + 1 << " ";
	}
	cout << 3 << endl;
    return 0;    
}
int main() 
{
    tc
    w(t) 
    {
        solve();
    }
	return 0;
}
