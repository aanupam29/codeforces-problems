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

const int N = (int) 1e5 + 5;
int a[N], b[N];
 
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		b[i] = a[i];
	}
	map<int, int> mp;
	sort(b, b + n);
	for (int i = 0; i < n; i++) 
	{
		mp[b[i]] = i;
	}
	for (int i = 0; i < n; i++) 
	{
		a[i] = mp[a[i]];
	}
	int L = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != i) {
			L = i;
			break;
		}
	}
	int R = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] != i)
		{
			R = i;
			break;
		}
	}
	if (L == -1 || R == -1)
	{
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	}
	else 
	{
		reverse(a + L, a + R + 1);
		int ok = true;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != i)
			{
				ok = false;
			}
		}
		if (ok)
		{
			cout << "yes" << endl;
			cout << L + 1 << " " << R + 1 << endl;
		} 
		else
		{
			cout << "no" << endl;
		}
	}
	return 0;
}
