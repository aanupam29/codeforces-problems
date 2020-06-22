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

void minimize(int &a, int b) 
{
    a = min(a, b);
}
void maximize(int &a, int b)
{
    a = max(a, b); 
}
int main() 
{
	int mx = 2 * 1000 * 1000 * 1000;
	int mn = -mx;
	int n; 
	cin >> n;
	while(n--) 
	{
		string s; cin >> s;
		int x; cin >> x;
		string ans; cin >> ans;
		if (ans == "N")
		{
			if (s == ">=") 
			{
			    s = "<";
			}
			else if (s == "<") 
			{
			    s = ">=";
			}
			else if (s == "<=") 
			{
			        s = ">";
			}
			else
			{
			    s = "<=";
			}
		}
		if (s == ">=")
		{
		    maximize(mn, x);
		}
		else if (s == ">") 
		{
		    maximize(mn, x + 1);
		}
		else if (s == "<=") 
		{
		    minimize(mx, x);
		}
		else{
		    minimize(mx, x - 1);
		}
	}
	if (mn <= mx)
	{
	    cout << mn;
	}
	else
	{
	    cout << "Impossible";
	}
}
