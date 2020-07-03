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
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

char ch[3];
long long a[5],ans=10000000000000;
void bt(int hei,long long b[5])
{	if(hei==3)
	{
		ans=min(ans,b[0]);
		return ;
	}
	long long c[5];
	for(int i=0;i<4-hei;i++)
	{
		for(int k=i+1;k<4-hei;k++)
		{
			for(int j=0;j<5;j++)
				c[j]=b[j];
			if(ch[hei]=='*')
				c[i]=c[i]*c[k];
			else
				c[i]=c[i]+c[k];
			for(int j=k;j<4;j++)
				c[j]=b[j+1];
			bt(hei+1,c);
		}
	}
}
int main()
{
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	a[4]=0;
	for(int i=0;i<3;i++)
	{
		cin>>ch[i];
	}
	bt(0,a);
	cout<<ans<<endl;
	return 0;
}
