#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	ll i, j, k;
	ll n, m;
	ll x, y, z;
	vector<ll> p2;
	n = 2;
	while (n<=(2*1000000000))
	{
		p2.push_back(n);
		n *= 2;
	}
    cin>>n;
	m = 0;
	map<ll, ll> mp;
	ll *a = new ll[n];
	for (i = 0; i < n; i++)
	{
		cin>>a[i];
		m = max(m, a[i]);
		mp[a[i]]++;
	}
	ll cnt = 0;
	for (i = 0; i < n; i++)
	{
		k = a[i];
		for (j = 0; j < p2.size(); j++)
		{
			x = p2[j] - k;
			if (mp[x])
			{
				if (x == k)
					cnt += (mp[x] - 1);
				else
					cnt += mp[x];
			}
		}
	}
	cout<<cnt/2;
	return 0;
}
