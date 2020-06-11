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

int main()
{
    fast;
    ll n;
	cin>>n;
	if(n<=3)
	{
		cout<<1<<endl; 
		return 0;
	}
	if(n%2==0)
	{
		cout<<2<<endl;
		return 0;
	}
	bool flag = true;
	for (int i = 2; i*i <= n; ++i)
	{
		if(n%i==0)
		{
			flag  = false; break;
		}
	}
	bool flag1 = true;
	for (int i = 2; i*i <= n-2; ++i)
	{
		if((n-2)%i==0)
		{
			flag1  = false; break;
		}
	}
	if(flag) 
	    cout<<1<<endl; 
	else if(flag1)
	    cout<<2<<endl;
	else 
	    cout<<3<<endl;
    return 0;
}
