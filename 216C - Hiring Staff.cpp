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

int main() 
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> v(k, 1);
	int cur = 0;
	for(int i = 1; i <= n + m + 1; i++)
	{
		while(cur < sz(v) && v[cur] < i - n + 1)
		{
		    cur++;
		}
		if(cur == sz(v))
		{
		    v.push_back(i-1);
		}
		if (i < n + m + 1)
		{
		    while(sz(v)-cur < k)
			{
			    v.push_back(i);
			}	
		}
	}
	cout << sz(v) << endl;
	for (auto &it : v)
		cout << it << " ";
}
