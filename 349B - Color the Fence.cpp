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
	if (a.first == b.first)
	{
		return a.second > b.second;
	}
	return a.first < b.first;
}
int main()
{
	int i, j, k;
	int n, m, v;
	int x, y;
	map<int, int> mp;
	vector<pp> vec;
	cin >> v;
	for (i = 0; i < 9; i++)
	{
		cin >> m;
		vec.push_back({ m,i + 1 });
		mp[i + 1] = m;
	}
	sort(vec.begin(), vec.end(), cmp);
	string str = "";
	while (v>0)
	{
		if (v >= vec[0].first)
		{
			v -= vec[0].first, str.push_back(48+vec[0].second);
		}
		else
		{
			break;
		}
	}
	if (str.length())
	{
		for (i = 0; i < str.length(); i++) 
		{
			k = str[i] - 48;
			x = mp[str[i] - 48];
			for (j = 9; j > k; j--)
			{
				y = mp[j];
				if (v + x - y >= 0)
				{
					v = (v + x - y); 
					str[i] = j + 48;
					break;
				}
			}
		}
		cout << str << endl;
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}
