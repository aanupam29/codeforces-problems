#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],c[105],dp[1000005][5],n,k,ans;
int main()
{	
	memset(dp,0xc0,sizeof(dp));
	dp[0][0]=dp[0][1]=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		c[i] = a[i]-k*b[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i] >= 0)
		{
			for(int j=10000;j>=c[i];j--)
			{
				dp[j][0] = max(dp[j][0], dp[j-c[i]][0]+a[i]);
				ans = max(ans, dp[j][0]+dp[j][1]);
			} 			
		}
		else
		{
			for(int j=10000;j>=-c[i];j--)
			{
				dp[j][1] = max(dp[j][1], dp[j+c[i]][1]+a[i]);
				ans = max(ans, dp[j][0]+dp[j][1]);
			} 			
		}
	}
	if(ans==0)
	{
	    cout<<-1;
	}
	else
	{
	    cout<<ans;
    }
    return 0;
}
