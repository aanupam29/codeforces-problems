#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
	ll x1, y1;
	cin>>x1>>y1;
	ll x2, y2;
	cin>>x2>>y2;
	int n;
	cin>>n;
	int ans = 0;
	for (int i = 0; i < n; i++) 
	{
		ll a, b, c;
		cin>>a>>b>>c;
		ll res1 = a*x1 + b*y1 + c;
		ll res2 = a*x2 + b*y2 + c;
		if (res1/abs(res1) != res2/abs(res2)) 
		{
		    ans++;
		}   
	}
	cout<<ans;
	return 0;
}
