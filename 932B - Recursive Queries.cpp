#include <bits/stdc++.h>
using namespace std;
int x[10][1000005];
int f(int x)
{
	if(x<10)
	    return x;
	int prod=1;
	while(x)
	{
		if(x%10)
		    prod *= (x%10);
		x /= 10;
	}
	return f(prod);
}
void solve()
{
	for(int i=1;i<=1000000;i++)
	{
		x[f(i)][i]++;
	}
	for(int i=1;i<10;i++)
	{
		for(int j=1;j<=1000000;j++)
		{
			x[i][j]+=x[i][j-1];
		}
	}
	int Q;
	cin>>Q;
	while(Q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		cout<<x[k][r]-x[k][l-1]<<endl;
	}
}
int main()
{
	solve();
	return 0;
}
