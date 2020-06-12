#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll n, k, s, t, l, r = 4e9, ans = 4e9, m, c[200100], v[200100], a[200100];
bool check(int x)
{
	int y, z = 0;
	for (int i = 1; i <= k; ++i) 
	{
		y = a[i] - a[i - 1];
		if (x < y)  
		    return 0;
		z += y * 2 - min(y, x - y);
	}
	return z <= t;
}
int main() 
{
	cin >> n >> k >> s >> t;
	for (int i = 0; i < n; ++i)
		scanf("%d%d", c + i, v + i);
	for (int i = 1; i <= k; ++i)
		scanf("%d", a + i);
	a[++k] = s;
	sort(a, a + k + 1);
	while (l < r) 
	{
		m = (l + r) / 2;
		if (check(m))
		    r = m;
		else 
		    l = m + 1;
	}
	for (int i = 0; i < n; ++i)
		if (v[i] >= l && c[i] < ans)
		    ans = c[i];
	if (check(l) == 0 || ans == 4e9)
	    return cout << -1, 0;
	cout << ans;
}
