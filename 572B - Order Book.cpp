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

map<int,int> a,b;
vector<pair<int,int> > m,n;
int main()
{
	char c[3];
	int q,d,cost,qty;
	cin >> q >> d;
	for(int i=0;i<q;i++)
	{
		cin>>c>>cost>>qty;
		if(c[0]=='S')
			a[cost]+=qty;
		else if(c[0]=='B')
			b[cost]+=qty;
	}
	for(map<int,int>::iterator it=a.begin();it!=a.end();it++)
	{
		m.push_back(make_pair(it->first,it->second));
	}
	for(map<int,int>::iterator it=b.begin();it!=b.end();it++)
	{
		n.push_back(make_pair(it->first,it->second));
	}
	sort(m.begin(),m.end());
	sort(n.begin(),n.end());
	int start;
	if(d>m.size())
	{
		start = m.size()-1;
	}
	else
	{
		start = d-1;
	}
	for(int j=start;j>=0;j--)
	{
		if(j>m.size()-1)
		{
			break;
		}
		printf("S %d %d\n",m[j].first, m[j].second);
	}
	int i=n.size()-1;
	for(int j=0;j<d;j++)
	{
		if(i-j<0)
		{
			break;
		}
		printf("B %d %d\n",n[i-j].first, n[i-j].second);
	}
	return 0;
}
