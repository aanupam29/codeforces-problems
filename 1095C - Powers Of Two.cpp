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
    int n, k;
	cin >> n >> k;
	map<int, int> ans;
	queue<int> q;
	for(int i = 0; i <= 30; i++)
	{
		if(n & (1 << i))
		{
			if(i > 0)
			{
			    q.push(1 << i);
			}
			ans[1 << i]++;
		}
	}
	if(ans.size() > k)
	{
		cn;
		ret;
	}
	int cnt = ans.size();
	while(cnt < k && !q.empty())
	{
		int z = q.front();
		q.pop();
		ans[z]--;
		ans[z/2] += 2;
		if(z/2 > 1)
		{
			q.push(z / 2);
			q.push(z / 2);
		}
		cnt++;
	}
	if(cnt < k)
	{
		cn;
		ret;
	}
    cy;
	for(auto x : ans)
	{
		for(int i = 0; i < x.second; i++)
		{
			cout<<x.first<<" ";
		}
	}
    return 0;
}
