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
#define N 111

string s[105];
int a[105][10005];
int main()
{
	int i,j,n,m;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	    cin>>s[i];
		for(j=0;j<m;j++)
		{
			if(s[i][j]=='1')
			{
				break;
			}
		}
		if(j==m)
		{
		    cout<<"-1\n";
			return 0;
		}
		s[i]=s[i]+s[i]+s[i];
	}
	for(i=0;i<n;i++)
	{
		int f,l;
		for(j=0;j<m;j++)
		{	
		    a[i][j]=INT_MAX;
			if(s[i][j]=='1')
			{
				f=j;
			}
		}
		for(j=m;j<2*m;j++)
		{
			if(s[i][j]=='1')
			{
				f=j;
			}
			a[i][j-m]=j-f;
		}
		for(j=2*m;;j++)
		{
			if(s[i][j]=='1')
			{
			    f=j;
				break;
			}
		}
		for(j=2*m-1;j>=m;j--)
		{	
		    if(s[i][j]=='1')
			{
				f=j;
			}
			a[i][j-m]=min(a[i][j-m],f-j);
		}
	}
	int ans=INT_MAX;
	for(i=0;i<m;i++)
	{
		int sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j][i];
		}
		ans=min(ans,sum);
	}
	cout<<ans<<endl;
}
