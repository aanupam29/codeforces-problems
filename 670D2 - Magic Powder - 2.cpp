#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
ll a[100005], b[100005];
int main()
{
	ll i, j, k;
	ll n, m;
	cin>>n>>k;
	for (i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	ll high, low, mid, ans;
	high = 2000000005, low = 0, ans = 0;
	ll cnt;
	while (low <= high)
	{
		mid = (low + high) / 2;
		cnt = 0;
		for (i = 0; i < n; i++)
		{
			cnt += max((ll)0, mid*a[i] - b[i]);
			if (cnt > k)
			{
				break;
			}
		}
		if (cnt == k) 
		{
			ans = mid;
			break;
		}
		if (cnt > k)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
			ans = max(ans, mid);
		}
	}
    cout<<ans;
	return 0;
}
