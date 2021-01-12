#include <bits/stdc++.h>
using namespace std;
#define int long long
#define io ios_base::sync_with_stdio(false),cin.tie(NULL)
#define N 109
int dp[N][2];
signed main() 
{
    io;
    int i,j,t,n,k,d,mod=1e9+7;
    cin>>n>>k>>d;
    dp[0][0]=1;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=min(i, k); j++)
        {
            if(j >= d)
            {
                dp[i][1] = (dp[i][1]+dp[i-j][0])%mod;
                dp[i][1] = (dp[i][1]+dp[i-j][1])%mod;
            }
            else
            {
                dp[i][0] = (dp[i][0]+dp[i-j][0])%mod;
                dp[i][1] = (dp[i][1]+dp[i-j][1])%mod;
            }
        }
    }
    cout<<dp[n][1];
}
