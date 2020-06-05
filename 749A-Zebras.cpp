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
	string input;
	cin>>input;
	vector<int>ans[300000];
	int x=0,size,c=0;
	size = input.size();
	for(int i=0;i<size;i++)
	{
		if(input[i]=='0')
		{
				ans[x++].push_back(i+1);
		}
		else
		{
			if(x==0)
			{
				cout<<-1;
				return 0;
			}
			else 
				ans[--x].push_back(i+1);
		}
		c = max(c,x);
 
	}
	if(c != x)
	{
		minus;
		ret;
	}
	cout<<x;
	nl;
	for(int i=0;i<x;i++)
	{
		int n=ans[i].size();
		cout<<n<<" ";
		for(int j=0;j<n;j++)
			cout<<ans[i][j]<<" ";
	    nl;
	}
	ret;
}
