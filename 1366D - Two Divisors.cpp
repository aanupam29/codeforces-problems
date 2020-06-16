#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i = 0; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define INF 1000000007
#define mod 1005
#define ll long long int
vector<bool> isPrime;
vector<int> sFactor;
void sieve(int n)
{
	isPrime.assign(n+1, true);
	sFactor.assign(n+1, 0);
	isPrime[0] = isPrime[1] = false;
	for(ll i=2; i<=n;i++)
	{
		if(isPrime[i])
		{
			sFactor[i] = i;
			for(ll j=i*i; j<=n; j+=i)
			{
				if(isPrime[j])
				{
					isPrime[j] = false;
					sFactor[j] = i;
				}
			}
		}
	}
}
void solve()
{
	ll n, a;
	cin>>n;
	vector<pair<int, int>> divs;
	REP(i,n)
	{
		cin>>a;
		int p = sFactor[a];
		ll x = a, d1 = 1, d2 = a;
		while(x%p==0)
		{
			x=x/p;
			d1*=p;
		}
		d2 = a/d1;
		if(d1>1 && d2>1)
		{
			divs.push_back({d1,d2});
		}
		else
		{
			divs.push_back({-1,-1});
		}
	}
	REP(i,n)
		cout<<divs[i].first<<" ";
	cout<<"\n";
	REP(i,n)
		cout<<divs[i].second<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	sieve(1e7+5);
	solve();
	return 0;
}
