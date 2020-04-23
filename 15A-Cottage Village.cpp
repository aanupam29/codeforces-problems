#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";

int main() 
{
    fast
    double a,b,n, t;
	cin>>n>>t;
	vector<pair<double,double>> v;
	for(int i = 0 ; i < n; i++)
	{
		cin>>a>>b;
		v.emplace_back(a,b);
	}
	sort(v.begin(),v.end());
	int ans = 2;
	double temp;
	for (int i = 0 ; i < n-1 ; i++)
	{
		temp = abs((v[i+1].first - v[i+1].second/2) - (v[i].first + v[i].second/2));
		if(temp < t)
			continue;
		if(temp > t)
			ans += 2;
		if(temp-t== 0.0)
			ans ++;
	}
	cout<<ans;
	return 0;
}
