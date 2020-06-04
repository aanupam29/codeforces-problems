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

const int N=5e5+5;
ll n, minval=1e9, ans=0;
ll a[N];
bool checkpos=0, checkneg=0;
int main()
{
	fast;
	cin>>n;
	if(n == 1)
	{
	    int k;
	    cin>>k;
	    cout<<k;
	    exit(0);
	}
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		minval=min(abs(a[i]), minval);
		checkpos|=(a[i]>=0);
		checkneg|=(a[i]<=0);
		ans+=abs(a[i]);
	}
	if(checkpos && checkneg)
	{
		cout<<ans;
	}
	else
	{
		cout<<ans-2*minval;
	}
	return 0;
}
