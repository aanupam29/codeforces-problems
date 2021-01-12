#include <bits/stdc++.h>
using namespace std;
#define int long long 
char grid[1005][1005];
int dp[2][1005];
int countb[1005];
int countw[1005];
int32_t main()
{
    int row, col, x, y;
    memset(dp, 0, sizeof dp);
    memset(countb, 0, sizeof countb);
    memset(countw, 0, sizeof countw);
    cin >> row >> col >> x >> y;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '#')
                countb[j]++;
            else
                countw[j]++;
        }
    }
    for (int i = 2; i <= col; i++)
    {
        countb[i] = countb[i - 1] + countb[i];
        countw[i] = countw[i - 1] + countw[i];
    }
    dp[0][0] = 0;
    dp[1][0] = 0;
    for (int i = 1; i <= col; i++)
    {
        int ansb = 1e18;
        int answ = 1e18;
        for (int j = x; j <= y; j++)
        {
            if (i - j >= 0)
            {
                ansb = min(ansb, dp[0][i - j] + countb[i] - countb[i - j]);
                answ = min(answ, dp[1][i - j] + countw[i] - countw[i - j]);
            }
        }
        dp[1][i] = ansb;
        dp[0][i] = answ;
    }
    cout << min(dp[0][col], dp[1][col]);
    return 0;
}
