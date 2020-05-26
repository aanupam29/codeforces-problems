#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < int(n); i++) 

const int N = 500 * 1000 + 13;
int n, m;
int rk[N], p[N];
int getP(int a)
{
	return (a == p[a] ? a : p[a] = getP(p[a]));
}
void unite(int a, int b)
{
	a = getP(a), b = getP(b);
	if (a == b) 
	    return;
	if (rk[a] < rk[b]) 
	    swap(a, b);
	p[b] = a;
	rk[a] += rk[b];
}
int main()
{
	scanf("%d%d", &n, &m);
	forn(i, n) 
	    p[i] = i, rk[i] = 1;
	forn(i, m)
	{
		int k;
		scanf("%d", &k);
		int lst = -1;
		forn(j, k)
		{
			int x;
			scanf("%d", &x);
			--x;
			if (lst != -1)
				unite(x, lst);
			lst = x;
		}
	}
	forn(i, n)
		printf("%d ", rk[getP(i)]);
}
