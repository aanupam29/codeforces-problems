#include<bits/stdc++.h>
typedef long long int ll;
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
