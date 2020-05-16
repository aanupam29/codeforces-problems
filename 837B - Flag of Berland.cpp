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

vector<string> flag;
int main() 
{
	int n, m;
	cin >> n >> m;
	flag.resize(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> flag[i];
	}
	if(n % 3 != 0 && m % 3 != 0) 
	{
	    cn;
		ret;
	}
	bool ok;
	if(n % 3 == 0) 
	{
		ok = true;
		int strip = n / 3;
		char s1 = flag[0][0];
		char s2 = flag[strip][0];
		char s3 = flag[(2 * strip)][0];
		for(int i = 0; i < strip; ++i)
			for(int j = 0; j < m; ++j)
				if(flag[i][j] != s1)
					ok = false;
		for(int i = strip; i < 2 * strip; ++i)
			for(int j = 0; j < m; ++j)
				if(flag[i][j] != s2)
					ok = false;
		for(int i = 2 * strip; i < 3 * strip; ++i)
			for(int j = 0; j < m; ++j)
				if(flag[i][j] != s3)
					ok = false;
		if(ok && s1 != s2 && s1 != s3 && s2 != s3) 
		{
			cy;
			ret;
		}
	}
	if(m % 3 == 0) 
	{
		ok = true;
		int strip = m / 3;
		char s1 = flag[0][0];
		char s2 = flag[0][strip];
		char s3 = flag[0][(2 * strip)];
		for(int i = 0; i < n; ++i)
			for(int j = 0; j < strip; ++j)
				if(flag[i][j] != s1)
					ok = false;
		for(int i = 0; i < n; ++i)
			for(int j = strip; j < 2 * strip; ++j)
				if(flag[i][j] != s2)
					ok = false;
		for(int i = 0; i < n; ++i)
			for(int j = 2 * strip; j < 3 * strip; ++j)
				if(flag[i][j] != s3)
					ok = false;
		if(ok && s1 != s2 && s1 != s3 && s2 != s3) 
		{
			cy;
			ret;
		}
	}
	cn;
	return 0;
}
