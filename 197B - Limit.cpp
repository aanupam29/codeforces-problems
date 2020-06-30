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
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main(){
	int n, m, a, b, t, g;
	cin >> n >> m, t = n + 1;
	cin >> a;
	while(t--)
	{
	    cin >> b;
	}
	if(n < m)
	{
	    return (cout << "0/1", 0);
	}
	if(a * b < 0)
	{
	    cout << "-";
	}
	if(n > m)
	{
	    cout << "Infinity";
	}
	else
	{
		a = abs(a);
		b = abs(b);
		g = __gcd(a, b);
		cout << a / g << "/" << b / g;
	}
}
