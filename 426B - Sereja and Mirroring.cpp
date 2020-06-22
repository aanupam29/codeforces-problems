#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<m;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	int t=n;
	while(t%2==0)
	{
		int f=1;
		int i=0;
		while(i<t/2)
		{
		    for(int j=0;j<m;j++)
		    {
			    if(a[i][j]!=a[t-i-1][j])
			    {
				    f=0;
				    break;
			    }
		    }  
		    i++;
	    }
	    if(f)
	    {
		    t/=2;
	    }
		else
		{
			break;
		}
	}
	cout<<t;
}
