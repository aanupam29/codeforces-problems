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
#define rv(v)          reverse(v.begin(),v.end())
#define fr first
#define sc second

void solve()
{
    ll pt=0,a=0,b=0,c=0,d=0,e=0,n,a1,b1,c1,d1,e1;
	cin>>n;
	ll p[n];
	ff(i,0,n)
	{
		cin>>p[i];
	}
	cin>>a1>>b1>>c1>>d1>>e1;
	ff(i,0,n)
	{
		pt += p[i];
		while(p)
		{
			if(pt>=e1)
			{
				e += pt/e1;
				pt %= e1;
			}
			else if(pt>=d1)
			{
				d += pt/d1;
				pt %= d1;
			}
			else if(pt>=c1)
			{
    			c += pt/c1;
    			pt %= c1;
			}
			else if(pt>=b1)
			{
				b += pt/b1;
				pt %= b1;
			}
			else if(pt>=a1)
			{
				a += pt/a1;
				pt %= a1;
			}
			else 
			    break;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<"\n"<<pt;
}

int main()
{
    fast;
    int t=1;
    //cin>>t;
    w(t)
    {
        solve();
    }
    return 0;
}
