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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    ll n,l,r,ql,qr;
	cin>>n>>l>>r>>ql>>qr;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	ll p[n]={0},s[n]={0};
	p[0]=a[0]*l,s[n-1]=a[n-1]*r;
	for(ll i=1;i<n;i++)
	{
		p[i]=(p[i-1]+a[i]*l);
	}
	for(ll i=n-2;i>=0;i--)
	{
		s[i]=(s[i+1]+a[i]*r);
	}
	ll tl,tr,tmp,ans=1000000007;
	ans = (p[n-1]+(n-1)*ql);
	ans = min(ans,(s[0]+(n-1)*qr));
	for(ll i=0;i<n-1;i++)
	{
		tmp=p[i]+s[i+1];
		tl=i+1,tr=n-i-1;
		if(tl<tr)
		{
			tmp+=(qr*(tr-tl-1));
		}
		else if(tl>tr)
		{
			tmp+=(ql*(tl-tr-1));
		}
		ans=min(ans,tmp);
	}
	cout<<ans;
}
