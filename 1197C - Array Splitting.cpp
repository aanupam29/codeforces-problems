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

const int N = int(3e5) + 99;
int n, k;
int a[N];
int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	vector <int> v;
	for(int i = 1; i < n; ++i)
	{
	    v.push_back(a[i - 1] - a[i]);
	}
	sort(v.begin(), v.end());
	int res = a[n - 1] - a[0];
	for(int i = 0; i < k - 1; ++i) 
	{
	    res += v[i];
	}
	cout << res << endl;
 	return 0;
}
