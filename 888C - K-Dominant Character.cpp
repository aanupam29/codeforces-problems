#include <bits/stdc++.h>
using namespace std;
vector<int> v[26];
int dist[26];
int main()
{
	int i, j, k;
	int n, m;
	string s;
	memset(dist, 0, sizeof(dist));
	cin >> s;
	for (i = 0; i < s.length(); i++)
	{
		v[s[i] - 'a'].push_back(i + 1);
	}
	n = s.length();
	for (i = 0; i < 26; i++)
	{
		if (!v[i].size())
		{
			dist[i] = INT_MAX;
			continue;
		}
		m = v[i].size();
		dist[i] = max(v[i][0], n - v[i][m - 1] + 1);
		for (j = 1; j < m; j++)
			dist[i] = max(dist[i], v[i][j] - v[i][j - 1]);
	}
	m = dist[0];
	for (i = 1; i < 26; i++)
		m = min(m, dist[i]);
	printf("%d\n", m);
	return 0;
}
