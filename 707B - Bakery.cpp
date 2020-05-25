#include <bits/stdc++.h>
using namespace std;
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define pb(a) push_back(a)
#define mp(x, y) make_pair((x), (y))
#define ll long long int
using namespace std;
vector<pair<ll,ll> > v[100001];
bool aa[100001] = {false};
int main()
{
	ll a,b,c;
	cin>>a>>b>>c;
	vector<ll>vec;
	pair<ll,ll>p;
	for(int i=0;i<b;i++)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		p=mp(x,z);
		v[x].push_back(mp(y,z));
		v[y].push_back(mp(x,z));
	}
	if(c>0)
	{
		while(c--)
		{
			int x;
			cin>>x;
			vec.push_back(x);
			aa[x]=true;
		}
	}
	else
	{
		cout<<-1;
		return 0;
	}
	ll ans = -1,tmp = LLONG_MAX;
	for(int i=0;i<vec.size();i++)
	{
		for(int j=0;j<v[vec[i]].size();j++)
		{
			if(!aa[v[vec[i]][j].fs])
			{
				tmp = min(tmp,v[vec[i]][j].sec);
				ans = tmp;
			}
		}
	}
	cout<<ans;
}
