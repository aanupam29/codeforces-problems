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

const string vow="aeiou ";
string s;
bool isVow(char c) 
{
	for (int i=0; i<vow.length(); i++) 
	{
		if (c==vow[i]) 
		{
			return true;
		}
	}
	return false;
}
int main() 
{
	cin>>s;
	if (s.length()<3) 
	{
		cout<<s;
		return 0;
	}
	cout<<s[0]<<s[1];
	char x=s[0], y=s[1];
	for (int i=2; i<s.length(); i++) 
	{
		if (!isVow(s[i]) && !isVow(x) && !isVow(y)) 
		{
			if (s[i]!=y || y!=x) 
			{
				cout<<' ';
				x=y;
				y=' ';
			}
		}
		cout<<s[i];
		x=y;
		y=s[i];
	}
	return 0;
}
