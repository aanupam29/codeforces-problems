#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<m;j++)
			a[i][j] = s[j] - '0';
	}
	int n2,m2;
	cin>>n2>>m2;
	vector<vector<int>> b(n2,vector<int>(m2));
	for(int i=0;i<n2;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<m2;j++)
		{
			b[i][j] = s[j] - '0';
		}
	}
	ll ans = -1;
	pair<int,int> p;
	for(int x=-50;x<=50;x++)
	{
		for(int y=-50;y<=50;y++)
		{
			ll cur = 0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(i + x >= 0 && i+x<n2 && j+y >=0 && j+y< m2)
					{
						cur += a[i][j] * b[i+x][j+y];
					}
				}
			}
			if(cur > ans)
			{
				p = {x,y};
			}
			ans = max(ans , cur);
		}
	}
	cout << p.first << ' ' << p.second << '\n';
}
