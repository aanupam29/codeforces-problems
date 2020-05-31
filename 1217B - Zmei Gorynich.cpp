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
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

const int N = 105;
int t;
int n, m;
int d[N], h[N];
int main() 
{
	cin >> t;
	for(int tc = 0; tc < t; ++tc)
	{
		cin >> n >> m;
		int maxDH = -2e9;
		for(int i = 0; i < n; ++i)
		{
			cin >> d[i] >> h[i];
			maxDH = max(maxDH, d[i] - h[i]);
		}
		int res = 1;	
		int maxD = *max_element(d, d + n);
		m -= maxD;
		if(m > 0)
		{
			if(maxDH <= 0) 
			    res = -1;
			else 
			    res += (m + maxDH - 1) / maxDH; 	
		}	
		cout << res << endl;
	}
	return 0;
}
