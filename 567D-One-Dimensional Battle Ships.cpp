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

int main() 
{
	int n, k, a, m;
	cin >> n >> k >> a >> m;
	set <int> s;
	s.insert(0); s.insert(n + 1);
	int cnt = (n + 1) / (a + 1);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		auto r_id = s.lower_bound(x);
		auto l_id = r_id; 
		l_id--;
		int l = *l_id, r = *r_id;
		s.insert(x);
		cnt -= (r - l) / (a + 1);
		cnt += (x - l) / (a + 1) + (r - x) / (a + 1);
		if (cnt < k)
		{
			return cout << i + 1, 0;
		}
	}
	minus;
	return 0;
}
