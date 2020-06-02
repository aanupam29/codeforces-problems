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
    int n, k;
	cin >> n >> k;
	vector<pp> skills(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> skills[i].first;
		skills[i].second = i;
	}
	sort(begin(skills), end(skills), greater< pair<int, int> >());
	set<int> available;
	string ans(n, '0');
	int currentTeam = 0;
	queue<int> remaining;
	for (int i = 0; i < n; ++i)
	{
		available.insert(i);
		remaining.push(skills[i].second);
	}
	while (!available.empty())
	{
		while (available.count(remaining.front()) == 0)
		{
			remaining.pop();
		}
		int index = remaining.front();
		remaining.pop();
		vi selected(1, index);
		set<int>::iterator j = available.find(index);
		for (int i = 0; i < k and j != begin(available); ++i)
		{
			--j;
			selected.push_back(*j);
		}
		j = available.find(index);
		for (int i = 0; i < k and j != prev(end(available)); ++i)
		{
			++j;
			selected.push_back(*j);
		}
		for (int v : selected)
		{
			ans[v] = '1' + currentTeam;
			available.erase(v);
		}
		currentTeam ^= 1;
	}
	cout<<ans;
	return 0;
}
