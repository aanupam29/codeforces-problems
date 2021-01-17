#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)
using namespace std;
int main() 
{
    fast_io;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;   
    vector<int> t(n), dp(n), dp1(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> t[i];
    }
    if (t[n - 1] <= 0) 
    {
        dp1[n - 1] = 1;
    }
    if (t[0] >= 0) 
    {
        dp[0] = 1;
    }
    for (int i = n - 2; i >= 0; i--) 
    {
        if (t[i] <= 0) 
        {
            dp1[i] = dp1[i + 1] + 1;
        }
        else 
        {
            dp1[i] = dp1[i + 1];
        }
    }
    for (int i = 1; i < n; i++) 
    {
        if (t[i] >= 0) 
        {
            dp[i] = dp[i - 1] + 1;
        }
        else 
        {
            dp[i] = dp[i - 1];
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n - 1; i++) 
    {
        ans = min(ans, dp[i] + dp1[i+1]);
    }
    cout << ans;
    return 0;
}
