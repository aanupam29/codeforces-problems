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

const int N = 100000;
pair<int, int> ans[N];
int main() 
{
	int n, m;
	cin>>n>>m;
	if (m < n - 1) 
	{
		puts("Impossible");
		ret;
	}
	int cur = 0;
	ff(i,0,n-1)
	{
    	ff(j,i+1,n-1)
    	{
    		if (cur == m)
    			break;
    		if (__gcd(i + 1, j + 1) == 1)
    			ans[cur++] = make_pair(j, i);
    	}
	}
	if(cur != m)
	{
		puts("Impossible");
		ret;
	}
	puts("Possible");
	ff(i,0,m-1)
	{
		printf("%d %d\n", ans[i].first + 1, ans[i].second + 1);
	}
	return 0;
}
