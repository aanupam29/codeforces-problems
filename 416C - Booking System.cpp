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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

class group 
{
	public:
	
	int id;
	int size;
	int income;
};
class table 
{
	public:
	
	int id;
	int size;
};
bool byIncomeDescending(const group &g1, const group &g2) 
{
	return g1.income > g2.income;
}
bool bySize(const table &t1, const table &t2) 
{
	return t1.size < t2.size;
}
bool canFit(const table &t, const group &g)
{
	return t.size < g.size;
}
int main()
{
	int n;
	cin >> n;
	vector<group> groups(n);
	for (int i = 0 ; i < n ; i++) 
	{
		groups[i].id = i + 1;
		cin >> groups[i].size >> groups[i].income;
	}
	sort(groups.begin(), groups.end(), byIncomeDescending);
	int m;
	cin >> m;
	vector<table> tables(m);
	for (int i = 0 ; i < m ; i++)
	{
		tables[i].id = i + 1;
		cin >> tables[i].size;
	}
	sort(tables.begin(), tables.end(), bySize);
	int sum = 0;
	vector<pair<int, int> > ans;
	for (int i = 0 ; i < n ; i++) 
	{
		auto group = groups[i];
		auto tableToGive = lower_bound(tables.begin(), tables.end(), group, canFit);
		if (tableToGive == tables.end()) 
		{
		    continue;
		}
		sum += group.income;
		ans.push_back(make_pair(group.id, tableToGive->id));
		tables.erase(tableToGive);
	}
	cout << ans.size() << ' ' << sum << endl;
	for (auto p : ans) 
	{ 
	    cout << p.first << ' ' << p.second << endl;
	}
}
