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
    int n;
	cin >> n;
	vi a(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	string res;
	int l = 0, r = n - 1;
	int lst = 0;
	while (l <= r) 
	{
		vector<pair<int, char>> cur;
		if (lst < a[l])
		{
		    cur.push_back(make_pair(a[l], 'L'));
		}
		if (lst < a[r])
		{
		    cur.push_back(make_pair(a[r], 'R'));
		}
		sort(cur.begin(), cur.end());
		if (int(cur.size()) == 2)
		{
			cur.pop_back();
		}
		if (int(cur.size()) == 1)
		{
			if (cur[0].second == 'L')
			{
				res += 'L';
				lst = a[l];
				++l;
			}
			else
			{
				res += 'R';
				lst = a[r];
				--r;
			}
		} 
		else
		{
			break;
		}
	}
	cout<<res.size()<<endl<<res;
	return 0;
}
