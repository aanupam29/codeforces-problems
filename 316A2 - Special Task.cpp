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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

string str;
bool vis[75];
int main()
{
	cin>>str;
	int count = 1, len = l(str), j = 10;
	if (str[0] == '?')
	{
		count *= 9;
	}
	else if (str[0] > 64)
	{
		count *= 9;
		j=9;
		vis[str[0]] = true;
	}
	for (int i = 1; i < len; ++i)
	{
		if (str[i] == '?')
		{
			count *= 10;
		}
		else if (str[i] > 64 && !vis[str[i]])
		{
			vis[str[i]] = true;
			count *= j--;
		}
	}
	cout<<count;
	return 0;
}
