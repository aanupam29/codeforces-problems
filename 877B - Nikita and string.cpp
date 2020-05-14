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

#define N 5100
int l[N], r[N], a[N];
int main()
{
	int i, j, k;
	int n, m;
	string s, t;
	cin >> s;
	n = s.length();
	memset(l, 0, sizeof(l));
	memset(r, 0, sizeof(r));
	memset(a, 0, sizeof(a));
	t = s; t.push_back('#');
	for (i = 1; i <= n; i++)
		t[i] = s[i - 1];
	t[0] = '#';
	for (i = 1; i <= n; i++)
	{
		if (t[i] == 'b')
			l[i + 1] = l[i] + 1;
		else
			l[i + 1] = l[i];
		if (t[i] == 'a')
			a[i] = a[i - 1] + 1;
		else
			a[i] = a[i - 1];
	}
	for (i = n; i >= 1; i--)
	{
		if (t[i] == 'b')
			r[i - 1] = r[i] + 1;
		else
			r[i - 1] = r[i];
	}
	int mx = 0;
	int x, y;
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			x = l[i] + r[j];
			y = a[j] - a[i];
			mx = max(mx, n - x - y);
		}
	}
	cout<<mx;
	return 0;
}
