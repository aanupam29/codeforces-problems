#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fs first
#define sc second
const int MAX_N = 1e5+7;
int n, m, a[MAX_N], b[MAX_N];
pair<int, int> c[MAX_N];
void input()
{
	cin>>n>>m;
	for (int i=1; i<=n; i++)
	{
		cin>>a[i];
	}
	for (int i=1; i<=m; i++)
	{ 
		cin>>b[i];
	}
}
bool check(int x) 
{
	memset(c, 0, sizeof c);
	for (int i=1; i<=m; i++) 
	{
		c[i].sc = i;
	}
	for (int i=1; i<=x; i++) 
	{
		c[a[i]].fs=i;
	}
	for (int i=1; i<=m; i++) 
	{
		if (c[i].fs==0)
		{
			return false;
		}
	}
	sort(c+1, c+m+1);
	int sum=0;
	for (int i=1; i<=m; i++)
	{
		if (c[i].fs <= sum+b[c[i].sc])
		{
			return false;
		}
		sum += b[c[i].sc]+1;
	}
	return true;
}
void solve()
{
	int l=1, r=n, res=-1;
	while (l<=r)
	{
		int mid=(r+l)/2;
		if (check(mid)) 
		{
			res=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	cout<<res<<endl;
}
int main()
{
	input();
	solve();
	return 0;
}
