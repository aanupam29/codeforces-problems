#include <bits/stdc++.h>
#define N 2010
using namespace std;
int n, m, k;
char temp[N];
int mat[N][N], sumR[N][N], sumC[N][N];
int main()
{
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 1; i <= n; i++)
	{
		scanf("%s", temp + 1);
		for (int j = 1; j <= m; j++)
		{
			if (temp[j] == '*')
			{
				mat[i][j] = 0;
			} 
			else 
			{
				mat[i][j] = 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			sumR[i][j] = sumR[i][j - 1] + mat[i][j];
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			sumC[i][j] += sumC[i][j - 1] + mat[j][i]; 
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = k; j <= m; j++)
		{
			if (sumR[i][j] - sumR[i][j - k] == k)
			{
				ans ++;
			}
		}
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = k; j <= n; j++)
		{
			if (sumC[i][j] - sumC[i][j - k] == k)
			{
				ans ++;
			}
		}
	}
	if (k == 1) 
	    ans >>= 1;
	printf("%d\n", ans);
}
