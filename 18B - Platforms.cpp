#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, d, m, l;
	cin>>n>>d>>m>>l;
	vector<pair<long long,long long>> plat;
	for(long long i=0; i<n; ++i)
	{
	    plat.push_back({i*m, i*m+l});
	}
	for(long long i=0; i<n-1; i++)
	{
		for(long long j=plat[i].second+1; j<plat[i+1].first; j++)
		{
			if(!(j%d))
			{
				cout<<j;
				return 0;
			}
		}
	}
	cout<<((plat[n-1].second/d)+1)*d;
	return 0;
}
