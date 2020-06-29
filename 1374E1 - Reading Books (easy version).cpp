#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,t,a,b;
	cin>>n>>k;
	vector<ll> time,alice,bob,both;
	for(ll i=0;i<n;i++)
	{
		cin>>t>>a>>b;
		if(a&&b)
		{
			both.push_back(t);
		}
		else if(a)
		{
			alice.push_back(t);
		}
		else if(b)
		{
			bob.push_back(t);
		}
	}
	if(alice.size()+both.size()<k || bob.size()+both.size()<k)
	{
		cout<<"-1\n";
		return 0;
	}
	sort(alice.begin(),alice.end());
	sort(bob.begin(),bob.end());
	sort(both.begin(),both.end());
	ll i_a=0,i_b=0,idx=0,cost=0;
	while(true)
	{
		if(i_a<alice.size() && i_b<bob.size())
		{
			if(idx<both.size())
			{
				if(alice[i_a]+bob[i_b]<=both[idx])
				{
					cost+=(alice[i_a]+bob[i_b]);
					i_a++;i_b++;
				}
				else
				{
					cost+=both[idx];
					idx++;
				}
			}
			else
			{
				cost+=(alice[i_a]+bob[i_b]);
				i_a++;i_b++;
			}
		}
		else
		{
			cost+=both[idx];
			idx++;
		}
		if((i_a == k-idx) && (i_b == k-idx))
		{
			break;
		}
	}
	cout<<cost;
}
