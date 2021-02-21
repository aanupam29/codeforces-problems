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
#define rv(v)          reverse(v.begin(),v.end())

int Ask(int l, int r)
{
	printf("? %d %d\n", l, r);
	fflush(stdout);
	int res; 
	cin>>res;
	return res;
}
 
int main()
{
    int n;
    cin>>n;
	int cur = Ask(1, n);
	if(cur == 1 || Ask(1, cur) != cur) 
	{
		int l = cur + 1, r = n;
		while (l <= r) 
		{
			int m = l + r >> 1;
			if(Ask(1, m) == cur) 
			    r = m - 1;
			else
			    l = m + 1;
		}
		printf("! %d\n", l);
	} 
	else
	{
		int l = 1, r = cur - 1;
		while (l <= r) 
		{
			int m = l + r >> 1;
			if (Ask(m, n) == cur)
			    l = m + 1;
			else
			    r = m - 1;
		}
		printf("! %d\n", r);
	}
	fflush(stdout);
    return 0;
}
