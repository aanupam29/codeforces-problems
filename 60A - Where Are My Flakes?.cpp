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

int main()
{
	int n,k;
	cin>>n>>k;
	cin.ignore();
	string s;
	int l=n+1,r=0;
	for(int i=0;i<k;i++)
	{
		getline(cin,s);
		int x=s.size();
		if(s[7]=='l')
		{
			int temp=0,p=0,v=0;
			while(x>14)
			{
				temp+=(s[x-1]-'0')*pow(10,p);x--;p++;
				v=max(v,temp);
			}
			v<l? l=v:l;
		}
		else
		{
			int temp=0,p=0,v=0;
			while(x>15)
			{
				temp+=(s[x-1]-'0')*pow(10,p);x--;p++;
				v=max(v,temp);
			}
			v>r? r=v:r;
		}
	}
	l-r-1>0? cout<<l-r-1:cout<<"-1";
	return 0;
}
