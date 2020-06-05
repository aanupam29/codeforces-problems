#include <bits/stdc++.h>
#define N 200100
using namespace std;
int a[N], mp[N];
int main()
{
	int i, j, k;
	int n, m, t;
	int u, v;
	cin >> n >> m;
	vector<int> vec;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		vec.push_back(a[i]);
	}
	sort(vec.begin(), vec.end());
	memset(mp, 0, sizeof(mp));
	for (i = 1; i <= m; i++)
	{
		cin >> u >> v;
		if (a[u] > a[v])
		{
			mp[u]++;
		}
		else if (a[u] < a[v])
		{
			mp[v]++;
		}
	}
	for (i = 1; i <= n; i++)
	{
		k = lower_bound(vec.begin(), vec.end(), a[i]) - vec.begin();
		cout << k - mp[i] << " ";
	}
	return 0;
}
