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

int a, b, maxa;
void use_battery(int s)
{
	if(s == 1) 
	{
	    a = min(a + 1, maxa);
	}
	--b;	
}
void use_accum()
{
	--a;
}
int main()
{
	int ans = 0;
	int n;
	cin >> n >> b >> a;
	maxa = a;
	vector<int> s(n);
	for(int i = 0; i < n; i++) 
	{
	    cin >> s[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a == 0 && b == 0)
		{
			break;
		}
		else if(a == 0)
		{
			use_battery(s[i]);
		}
		else if(b == 0)
		{
			use_accum();
		}
		else if(s[i] == 1 && a < maxa)
		{
			use_battery(s[i]);
		}
		else 
		{
		    use_accum();
		}
		ans++;
	}
	cout << ans << endl;
}
