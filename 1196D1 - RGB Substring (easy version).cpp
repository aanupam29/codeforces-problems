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
    fast;
    const string t = "RGB";
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) 
	{
		int n, k;
		string s;
		cin >> n >> k >> s;
		int ans = 1e9;
		for (int j = 0; j < n - k + 1; ++j) 
		{
			for (int offset = 0; offset < 3; ++offset) 
			{
				int cur = 0;
				for (int pos = 0; pos < k; ++pos) 
				{
					if (s[j + pos] != t[(pos + offset) % 3]) 
					{
						++cur;
					}
				}
				ans = min(ans, cur);
			}
		}
		cout << ans << endl;
	}
    return 0;
}
