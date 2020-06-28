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
#define N 100010

int a[2100];
signed main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }
    if (k <= n)
    {
    	for (int i = 0; i < k; i++)
    	{
    		cout << 1 << ' ' << a[i] << '\n';
    	}
    	return 0;
    }
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
    	cout << 1 << ' ' << a[i];
    	nl;
    	cnt++;
    }
    for (int i = 1; i < n; i++)
    {
    	for (int j = 0; j < n - i; j++)
    	{
    		cout << i + 1 << ' ';
    		for (int z = n - 1; z >= n - i; z--)
    		{
    			cout << a[z] << ' ';
    		}
    		cout << a[j] << '\n';
    		cnt++;
    		if (cnt == k)
    		{
    			ret;
    		}
    	}
    }
    return 0;               
}
