#include <bits/stdc++.h>
using namespace std;
typedef long long Long;
const Long MX = 200;
Long cel[MX][MX];
double A[MX][MX];
double B[MX][MX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout.precision(10);
	cout << fixed;
	Long n;
	cin >> n;
	for(Long i = 0; i < n; i++)
	{
		for(Long j = 0; j < n; j++) cin >> cel[i][j];
	}
	for(Long i = 0; i < n; i++)
	{
		for(Long j = i; j < n; j++)
		{
			if(i == j)
			{
				A[i][j] = cel[i][j];
				B[i][j] = 0;
			}
			else
			{
				A[i][j] = (cel[i][j] * 1.0 + cel[j][i] * 1.0) / 2.0;
				B[i][j] = (cel[i][j] * 1.0 - cel[j][i] * 1.0) / 2.0;
				A[j][i] = A[i][j];
				B[j][i] = -B[i][j];
			}
		}
	}
	for(Long i = 0; i < n; i++)
	{
		for(Long j = 0; j < n; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	for(Long i = 0; i < n; i++)
	{
		for(Long j = 0; j < n; j++)
		{
			cout << B[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
