#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll i,n,h,ans,x,cur_h,k;
int main()
{
	cin >> n >> h >> k;
	ans = 0;
	cur_h = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%I64d", &x);
		if (cur_h + x <= h)
		{
		   cur_h += x;
		}
		else
		{
			ans++, cur_h = x;
		}
		ans += cur_h/k;
		cur_h %= k;
	}
	ans += cur_h/k;
	cur_h %= k;
	ans += (cur_h>0);
	cout << ans << endl;
	return 0;
}
