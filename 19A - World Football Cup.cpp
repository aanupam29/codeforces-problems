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

int n,g1,g2;
char c;
map<string,int> sc,gm,g;
string s,n1,n2,name[55];
bool cmp(string s1,string s2)
{
	if(sc[s1]!=sc[s2])
	    return sc[s1]>sc[s2];
	if(gm[s1]!=gm[s2])
	    return gm[s1]>gm[s2];
	return g[s1]>g[s2];
}
int main()
{
	cin>>n;
	for(int k=0;k<n;k++)cin>>name[k];
	for(int k=0;k<(n*(n-1)/2);k++)
	{
		cin>>s>>g1>>c>>g2;
		n1=s.substr(0,s.find('-'));
		n2=s.substr(s.find('-')+1);
		if(g1>g2)
		    sc[n1]+=3;
		else
		  if(g1==g2)
		    sc[n1]++,sc[n2]++;
		  else 
		    sc[n2]+=3;
		g[n1] += g1;
		g[n2] += g2;
		gm[n1] += g1-g2;
		gm[n2] += g2-g1;
	}
	sort(name,name+n,cmp);
	sort(name,name+n/2);
	for(int i=0;i<(n/2);i++)
	{
	    cout<<name[i];
	    nl;
	}
	return 0;
}
