#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define dbg printf("in\n");
#define nl printf("\n");
#define N 200100
#define inf 1e18
#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)
#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)
using namespace std;
int main()
{
	int i, j, k;
	int n, m;
	int x, y;
	ll cnt = 0;
	cin>>n>>k;
	int a[n+10];
	for (i = 1; i <= n; i++)
	{
		cin>>a[i];
    }
	a[0] = 0;
	for (i = 1; i <= n; i++)
	{
		x = a[i - 1] / k + (a[i - 1] % k == 0 ? 0 : 1);
		cnt += x;
		y = x*k - a[i - 1];
		a[i] -= y;
		a[i] = max(a[i], 0);
	}
	x = a[n] / k + (a[n] % k == 0 ? 0 : 1);
	cnt += x;
	cout<<cnt;
	return 0;
}
