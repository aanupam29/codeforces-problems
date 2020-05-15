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

int minleft[100005],minright[100005],maxleft[100005],maxright[100005],a[100005];
int main()
{
	int i,j,k;
	int n,p,q,r;
	cin>>n>>p>>q>>r;
	for(i=1;i<=n;i++)
	{
		ci(a[i]);
	}
	minleft[1]=maxleft[1]=a[1];
	minright[n]=maxright[n]=a[n];
	for(i=2;i<=n;i++)
	{
		minleft[i]=min(minleft[i-1],a[i]);
		maxleft[i]=max(maxleft[i-1],a[i]);
	}
	for(i=n-1;i>=1;i--)
	{
		minright[i]=min(minright[i+1],a[i]);
		maxright[i]=max(maxright[i+1],a[i]);
	}
	ll ans=-3e18;
	for(i=1;i<=n;i++)
	{
		ll leftval = (p<0) ? 1ll*minleft[i]*p : 1ll*maxleft[i]*p;
		ll rightval = (r<0) ? 1ll*minright[i]*r : 1ll*maxright[i]*r;
		ans = max(ans,leftval+rightval+1ll*q*a[i]);
	}
	cout<<ans<<endl;
	return 0;
}
