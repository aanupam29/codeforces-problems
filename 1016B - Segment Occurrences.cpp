#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
const int N = 1000 + 7;
int pr[N];
bool ok[N];
int main() 
{
	int n, m, q;
	scanf("%d%d%d", &n, &m, &q);
	string s, t;
	static char buf[N];
	scanf("%s", buf);
	s = buf;
	scanf("%s", buf);
	t = buf;
	pr[0] = 0;
	forn(i, n - m + 1)
	{
		bool fl = true;
		forn(j, m)
			if (s[i + j] != t[j])
				fl = false;
		ok[i] = fl;
		pr[i + 1] = pr[i] + ok[i];
	}
	for (int i = max(0, n - m + 1); i < n; ++i)
	{
		pr[i + 1] = pr[i];
	}
	forn(i, q)
	{
		int l, r;
		scanf("%d%d", &l, &r);
		--l, r -= m - 1;
		printf("%d\n", r >= l ? pr[r] - pr[l] : 0);
	}
	return 0;
}
