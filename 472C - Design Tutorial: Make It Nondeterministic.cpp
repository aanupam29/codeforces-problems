#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

map <string, int> m;
const int N = 233333;
pair <string, string> pp[N];
pair <int, int> p[N];
int main()
{
	ios::sync_with_stdio(false);
	int n; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> pp[i].first >> pp[i].second;
		m[pp[i].first] = m[pp[i].second] = 233;
	}
	int Mind = 0;
	for(map <string, int> :: iterator it = m.begin(); it != m.end(); it++)
	{
		m[it->first] = Mind++;
	}
	for(int i = 0; i < n; i++)
	{
		p[i].first = m[pp[i].first];
		p[i].second = m[pp[i].second];
	}
	bool flag = true;
	int last = -233;
	for(int i = 0; i < n; i++)
	{
		int t; 
		cin >> t; 
		t --;
		if(p[t].first > last && p[t].second > last)
		{
			last = min(p[t].first, p[t].second);
		}
		else if(p[t].first > last)
		{
			last = p[t].first;
		}
		else if(p[t].second > last)
		{
			last = p[t].second;
		}
		else
		{
		    flag = false;
		}
	}
	if(flag)
	{
	    cout << "YES\n";
	}
	else 
	{
	    cout << "NO\n";
	}
	return 0;
}
