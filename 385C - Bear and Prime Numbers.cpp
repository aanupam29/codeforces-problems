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

#define MAX 10000000
bool prime[MAX+1] = { false };
int cnt[MAX+1] = { 0 };
int F[MAX + 1] = { 0 };
void makePrime()
{
	int limit = sqrt((double)MAX);
	for (int i = 0; i <= MAX; i++)
	{
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for (int i = 2; i <= limit; i++)
	{
		if (prime[i])
		{
			for (int k = MAX / i, j = i*k; k >= i; k--, j -= i)
			{
				if (prime[k])
				{
					prime[j] = false;
				}
			}
		}
	}
}
void compute(){
	for (int i = 2; i <= MAX; i++)
	{
		if (prime[i])
		{
			for (int j = i; j <= MAX; j += i)
			{
				F[i] += cnt[j];
			}
		}
	}
	for (int i = 1; i <= MAX; i++)
	{
		F[i] += F[i - 1];
	}
}
int main()
{
	makePrime();
	int n, m;
	while (scanf("%d", &n) == 1)
	{
		for (int i = 0; i < n; i++)
		{
			int tmp;
			scanf("%d", &tmp);
			cnt[tmp]++;
		}
		compute();
		scanf("%d", &m);
		for (int i = 0; i < m; i++)
		{
			int L, R;
			scanf("%d%d", &L, &R);
			if (R>MAX)
			{
				R = MAX;
			}
			if (L > MAX)
			{
				printf("%d\n", 0);
			}
			else
			{
				printf("%d\n", F[R] - F[L - 1]);
			}
		}
	}
	return 0;
}
