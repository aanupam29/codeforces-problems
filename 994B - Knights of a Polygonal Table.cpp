#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

void solve()
{
	ll n,k;
	cin>>n>>k;
	vector<pp> v(n,{0,0});
	vi v1(n);
	ff(i,0,n-1)
	{
		cin>>v[i].first;v1[i]=v[i].first;
	}
	ff(i,0,n-1)
	{
		cin>>v[i].second;
	}
	sv(v);
	map<ll,ll>m;
    ll sum=0;map<ll,ll>m1;
	ff(i,0,n-1)
	{
		sum += v[i].second;
		m[v[i].first] = sum;
		m1[v[i].second]++;
		if(i >= k)
		{
			sum-=m1.begin()->first;
			m1[m1.begin()->first]--;
			if(m1[m1.begin()->first] == 0)
			{
				m1.erase(m1.begin()->first);
			}
		}
	}
	ff(i,0,n-1)
	{
		cout<<m[v1[i]]<<" ";
	}
}
int main()
{
    fast;
    solve();
}   
