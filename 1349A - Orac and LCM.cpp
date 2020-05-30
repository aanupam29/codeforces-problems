#include <bits/stdc++.h>
using namespace std;

const int len=1e5+10;
long long a[len],dp[len],ans;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i] = __gcd(a[i],dp[i-1]);
		ans = __gcd(a[i]*dp[i-1]/dp[i],ans);
	}
	cout<<ans;
	return 0;
}
