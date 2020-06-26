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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define MOD 1000000007
#define N 1000

int main()
{
	int i, j, k, m, n, a[1000], min, num = 0, x, ans, num2 = 0, num3 = 0, max;
	cin>>n;
	for (i=0;i<2*n-1;i++)
	{
		cin>>a[i];
		if (a[i]<0)
		{
			num2++;
		}
	}
	if(n % 2 == 1)
	{
		for (i = 0; i<2 * n - 1; i++)
		{
			if (a[i]<0)
			{
				a[i] = a[i] * -1;
			}
			num += a[i];
		}
	}
	if (n % 2 == 0)
	{
		if (num2 % 2 == 1)
		{
			for (i = 0; i<2 * n - 1; i++)
			{
				if (a[i]<0)
					a[i] *= -1;
				num += a[i];
			}
			sort(a, a + 2 * n - 1);
			num = num - 2 * a[0];
		}
		else
		{
			for (i =   0; i<2 * n - 2+1; i++)
			{
				if (a[i]<0)
					a[i] *= -1;
				num += a[i];
			}
		}
	}
	co(num);
	return 0;
}
