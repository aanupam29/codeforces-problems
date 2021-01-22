#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
using ll = long long;
const int N = 2e5 + 5, inf = 1e18;
ll n, arr[N], m, sum[N];
int main()
{
	cin>>n;
	for (int i = 1; i <=n ; i++)
	{
		cin>>arr[i];
		sum[i] = arr[i] + sum[i - 1];
	}
	cin>>m;
	while(m--)
	{
		ll x;
		cin>>x;
		ll l=1, r=n, mid;
		while(l <= r)
		{
			mid = (l + r)/2;
			if (x <= sum[mid] && x > sum[mid - 1])
			{
				cout<<mid<<endl;
				break;
			}
			if (x > sum[mid])
				l = mid+1;
			else
				r = mid-1;
		}
	}
	return 0;
}
