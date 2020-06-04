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

const int N=1e5+5;
int n;
int a[N], b[N];
int main()
{
	fast;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	sort(a+1, a+n+1);
	sort(b+1, b+n+1);
	reverse(a+1, a+n+1);
	reverse(b+1, b+n+1);
	ll i=1, j=1, player=0, moves=0, asum=0, bsum=0;
	while(moves < 2*n)
	{
		moves++;
		if(!player)
		{
			if(a[i] >= b[j])
			{
				asum += a[i];
				i++;
			}
			else
			{
				j++;
			}
		}
		else
		{
			if(b[j] >= a[i])
			{
				bsum += b[j];
				j++;
			}
			else
			{
				i++;
			}
		}
		player ^= 1;
	}
	cout<<asum-bsum;
	return 0;
}
