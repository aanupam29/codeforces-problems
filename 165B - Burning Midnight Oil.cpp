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
	ll i, j, k;
	ll n, m, x;
	ll high, low, mid, ans, cnt;
	scanf("%I64d%I64d", &n, &k);
	high = n; low = 1; ans = INT_MAX;
	while (low <= high)
	{
		mid = (high + low) / 2;
		cnt = mid; m = k;
		while (1)
		{
			x = mid / m; m *= k;
			cnt += x;

			if (!x)
				break;
		}
		if (cnt == n) 
		{
			ans = mid;
			break;
		}
		if (cnt > n)
			ans = min(ans, mid), high = mid - 1;
		else
			low = mid + 1;
	}
	printf("%I64d\n", ans);
	return 0;
}
