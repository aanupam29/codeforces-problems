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
    int n,q;
    cin>>n;
	vi a(200009);
	vi c1(200009);
	vi c2(200009);
	for(int i=1;i<=n;i++)
	    cin>>a[i];
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int op,p,x;
		cin>>op;
		if(op==1)
		{
			cin>>p>>x;
			a[p]=x;
			c1[p]=i;
		}
		else
		{
			cin>>x;
			c2[i]=x;
		}
	}
	for(int i=q-1;i>=0;i--)
	{
	    c2[i]=max(c2[i],c2[i+1]);
	}
	for(int i=1;i<=n;i++)
	{
		cout<< max(a[i],c2[c1[i]])<<" ";
	}
	return 0;
}
