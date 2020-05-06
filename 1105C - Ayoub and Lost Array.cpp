#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MOD 1000000007
#define MAXN 200010
using namespace std;

ll dp[MAXN][3];

int main()
{
    int n,l,r; cin >> n >> l >> r;
    dp[1][0]=r/3-(l-1)/3;
    dp[1][1]=(r+2)/3-(l+1)/3;
    dp[1][2]=(r+1)/3-l/3;
    FOR(i,2,n+1)
    {
        FOR(j,0,3)
        {
            FOR(k,0,3)
            {
                dp[i][(j+k)%3]=(dp[i][(j+k)%3]+dp[i-1][j]*dp[1][k])%MOD;
            }
        }
    }
    cout << dp[n][0] << '\n';

    return 0;
}
