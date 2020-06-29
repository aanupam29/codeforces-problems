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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int const N = 1e6 + 1;
int a, b, k, cs[N];
bool prime[N];
void sieve() 
{
	memset(prime, true, sizeof prime);
	prime[0] = prime[1] = false;
	for(int i = 2; i * i < N; ++i)
	{
		if(prime[i])
		{
			for(int j = i * i; j < N; j += i)
			{
				prime[j] = false;
			}
		}
	}
	cs[0] = 0;
	for(int i = 1; i <= N; ++i)
	{
		cs[i] = cs[i - 1] + prime[i - 1];
	}
}
bool can(int mid)
{
	for(int i = a; i <= b - mid + 1; ++i)
	{
		if(cs[i + mid] - cs[i] < k)
		{
			return false;
		}
	}
	return true;
}
int main() 
{
	sieve();
	scanf("%d %d %d", &a, &b, &k);
	int l = 1, r = b - a + 1, mid, res = -1;
	while(l <= r)
	{
		mid = (l + r) >> 1;
		if(can(mid))
		{
			r = mid - 1;
			res = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	printf("%d\n", res);
    return 0;
}
