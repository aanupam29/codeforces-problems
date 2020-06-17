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
#define mx 10000000

int main()
{
	int i, j, k;
	int n, m;
	string s;
	cin >> s;
	s = "00" + s;
	n = s.length();
	for (i = 0; i < n - 2; i++)
	{
		m = 100 * (s[i] - '0');
		for (j = i + 1; j < n - 1; j++)
		{
			m += 10 * (s[j] - '0');
			for (k = j + 1; k < n; k++)
			{
				m += (s[k] - '0');
				if (m % 8 == 0) 
				{
					cy;
					cout<<m;
					return 0;
				}
				m -= (s[k] - '0');
			}
			m -= 10 * (s[j] - '0');
		}
	}
	cn;
	return 0;
}
