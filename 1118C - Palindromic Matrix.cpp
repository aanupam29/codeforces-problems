#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
typedef pair<int, int> pt;
const int N = 1000 + 7;
int cnt[N];
int a[20][20];
int main()
{
	int n;
	cin>>n;
	forn(i, n * n)
	{
		int x;
		cin>>x;
		++cnt[x];
	}
	vector<pair<int, pt>> cells;
	forn(i, (n + 1) / 2)
	{
	    forn(j, (n + 1) / 2)
	    {
		    if (i != n - i - 1 && j != n - j - 1)
		    {
		    	cells.push_back({4, {i, j}});
		    }
		    else if ((i != n - i - 1) ^ (j != n - j - 1))
		    {
		    	cells.push_back({2, {i, j}});
		    }
		    else
			{
			    cells.push_back({1, {i, j}});
			}    
		}
    }
	for (auto cur : {4, 2, 1})
	{
		int lst = 1;
		for (auto it : cells)
		{
			if (it.first != cur)
			{
			    continue;
			}
			int i = it.second.first;
			int j = it.second.second;
			while (lst < N && cnt[lst] < cur)
			{
				++lst;
			}
			if (lst == N)
			{
				puts("NO");
				return 0;
			}
			a[i][j] = a[n - i - 1][j] = a[i][n - j - 1] = a[n - i - 1][n - j - 1] = lst;
			cnt[lst] -= cur;
		}
	}
	cout<<"YES\n";
	forn(i, n)
	{
		forn(j, n)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
