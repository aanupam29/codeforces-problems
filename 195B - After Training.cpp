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

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int mid = (m - 1) / 2 ;
	int curr = 0;
	int k = n;
	while (k--) 
	{
		if (m%2) 
		{
			if (curr % 2) 
			{
				mid -= curr;
			}
			else 
			{
				mid += curr;
			}
		}
		else
		{
			if (curr % 2) 
			{
				mid += curr;
			}
			else
			{
				mid -= curr;
			}
		}
		cout<<mid + 1;
		nl;
		curr++;
		if(mid == m - 1) 
		{
			mid = (m - 1)/2;
			curr = 0;
		}
	}
	return 0;
}
