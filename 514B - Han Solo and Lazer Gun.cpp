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
#define N              100015

int main() 
{
	set<double> st;
	int n, x0, y0, x, y;
	cin >> n >> x0 >> y0;
	while(n--)
	{
		cin >> x >> y;
		if(y0 - y == 0 && x0 - x == 0)
		{
			continue;
		}
		else if(y0 - y == 0)
		{
			st.insert(20000.0);
		}
		else if(x0 - x == 0)
		{
			st.insert(30000.0);
		}
		else
		{
			st.insert(1.0 * (x0 - x) / (y0 - y));
		}
	}
	cout << st.size() << endl;
}
