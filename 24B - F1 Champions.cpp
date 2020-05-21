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

struct F1
{
	int mark;
	int a[55];
	F1()
	{
		mark=0;
		fill(a,a+55,0);
	} 
};
map<string, F1> mp;
int n;
int sc[15]={25,18,15,12,10,8,6,4,2,1};
inline bool bet(F1 x,F1 y)
{
	if (x.mark!=y.mark) return x.mark>y.mark;
	else
	{
		for (int i=0;i<50;i++)
            if (x.a[i]!=y.a[i]) return x.a[i]>y.a[i];
	}
}
inline bool bett(F1 x,F1 y)
{
	if (x.a[0]!=y.a[0]) 
	    return x.a[0]>y.a[0];
	else 
	    return bet(x,y);
}
int main()
{
	cin >>n;
	for (int tr=0;tr<n;tr++)
	{
		int t;
		cin >>t;
		for (int i=0;i<t;i++)
		{
			string s;
			cin >>s;
			mp[s].mark+=(i<10 ? sc[i] : 0);
			mp[s].a[i]++;
		}
	}
	map<string, F1>::iterator it;
	F1 r1,r2;
	string s1,s2;
	for (it=mp.begin();it!=mp.end();it++)
	{
		if (bet(it->second,r1)) 
		    r1=it->second,s1=it->first;
		if (bett(it->second,r2)) 
		    r2=it->second,s2=it->first;
	}
	cout <<s1<<"\n"<<s2;
	return 0;
}
