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
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int n, i, x, y, a[100100], b[100100];
int main()
{
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		cin >> a[i] >> b[i];
		++(a[x] < b[y] ? x : y);
	}
	for (i = 0; i < n; ++i)
	{
		cout << (i < max(x, n / 2) ? '1' : '0');
	}
	cout << endl;
	for (i = 0; i < n; ++i)
	{
		cout << (i < max(y, n / 2) ? '1' : '0');
	}
	cout << endl;
	return 0;
}
