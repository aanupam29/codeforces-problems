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

bool cmp(pp a, pp b)
{
	if (abs(a.first) != abs(b.first))
		return abs(a.first) < abs(b.first);

	return abs(a.second) < abs(b.second);
}
int main()
{
	int i, j, k;
	int n, m;
	int x, y;
	scanf("%d", &n);
	pp *a = new pp[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		a[i] = { x,y };
	}
	sort(a, a + n, cmp);
	vector<pair<pp, char>> v;
	for (i = 0; i < n; i++)
	{
		x = a[i].first;
		y = a[i].second;
		if (x > 0)
		{
			v.push_back({ {1,abs(x)},'R' });
		}
		else if (x < 0)
		{
			v.push_back({ { 1,abs(x) },'L' });
		}
		if (y > 0)
		{
			v.push_back({ { 1,abs(y) },'U' });
		}
		else if (y < 0)
		{
			v.push_back({ { 1,abs(y) },'D' });
		}
		v.push_back({ { 2,-1 }, '#' });
		if (x > 0)
		{
			v.push_back({ { 1,abs(x) },'L' });
		}
		else if (x < 0)
		{
			v.push_back({ { 1,abs(x) },'R' });
		}
		if (y > 0)
		{
			v.push_back({ { 1,abs(y) },'D' });
		}
		else if (y < 0)
		{
			v.push_back({ { 1,abs(y) },'U' });
		}
		v.push_back({ { 3,-1 }, '#' });
	}
	m = v.size();
	printf("%d\n", m);
	for (i = 0; i < m; i++)
	{
		if (v[i].second == '#')
		{
			printf("%d\n", v[i].first.first);
		}
		else
		{
			printf("%d %d %c\n", v[i].first.first, v[i].first.second, v[i].second);
		}
	}
	return 0;
}
