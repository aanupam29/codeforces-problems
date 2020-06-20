#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define INF32 0x3f3f3f3f

const int N = 2e5+9;
int n, m, a[N], b[N];
int main()
{
    cin>>n;
    input(a,n);
	cin>>m;
	input(b,m);
	sort(a+1,a+n+1); 
	sort(b+1,b+m+1); 
	b[m+1] = INF32; 
	int x = 3*n , y = 3*m;
	if(x-y < 2*n-2*m) 
	{
	    x = 2*n, y = 2*m; 
	}
	for(int i = 1; i <= n; i++)
	{
		int l = 0, r = m, j;
		while(l <= r) 
		{
			j = (l+r)>>1;
			if(b[j] < a[i] && b[j+1] >= a[i])
			{
			    break;
			}
			if(b[j] < a[i])
			{
			    l = j + 1;
			}
			else
			{
			    r = j - 1;
			}
		}
		int p = 2*(i-1) + 3*(n-i+1);
		int q = 2*(j) + 3*(m-j);
		if(p-q > x-y)
		{
		    x = p, y = q;
		}
		if(p-q == x-y && p > x)
		{
		    x = p, y = q; 
		}
	}
	cout<<x<<":"<<y;
}
