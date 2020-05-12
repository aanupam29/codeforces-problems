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
    fast
    int k;
	cin >> k;
	vector<pair<int, pair<int, int>>> a;
	for (int i = 0; i < k; ++i) 
	{
		int n;
		cin >> n;
		vector<int> x(n);
		for (int j = 0; j < n; ++j)
		{
			cin >> x[j];
		}
		int sum = accumulate(x.begin(), x.end(), 0);
		for (int j = 0; j < n; ++j)
			a.pb(make_pair(sum - x[j], make_pair(i, j)));
	}
	stable_sort(a.begin(), a.end());
	for (int i = 0; i < a.size() - 1; ++i) 
	{
		if (a[i].first == a[i + 1].first && (a[i].second.first != a[i + 1].second.first)) 
		{
			cy;
			cout << a[i + 1].second.first + 1 << " " << a[i + 1].second.second + 1 << endl;
			cout << a[i].second.first + 1 << " " << a[i].second.second + 1 << endl;
			return 0;
		}
	}
	cn;
	return 0;
}
