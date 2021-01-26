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


int main()
{
    fast;
    int t;
    cin>>t;
    w(t)
    {
        int n;
        cin>>n; 
        n *= 2;
	 	multiset<int>m;
	 	vi a(n);
	 	for(int i=0;i<n;i++)
	 	{
	 		cin>>a[i]; 
	 		m.insert(a[i]);
	 	}
	 	sort(a.rbegin(),a.rend());
	 	bool no = true;
	 	for(int i=1;i<n;i++)
	 	{
	 		multiset<int>b = m;
	 		int x = a[0]+a[i];
	 		int x1 = x;
	 		int a1 = a[0], a2 = a[i];
	 		vector<pair<int,int>> v;
	 		bool f = true;
	 		while(b.size())
	 		{
	 			if(b.find(a1) != b.end()) 
	 			{
	 			    b.erase(b.find(a1));
	 			}
	 			else
	 			{
	 			    f = false; 
	 			    break;
	 			}
	 			if(b.find(a2) != b.end()) 
	 			{
	 			    b.erase(b.find(a2));
	 			}
	 			else
	 			{
	 			    f = false; 
	 			    break;
	 			}
	 			v.pb({a1,a2});
	 			x = max(a1,a2);
	 			if(b.size() == 0)
	 			{
	 			    break;
	 			}
	 			a1 = *(b.rbegin());
	 			a2 = x-a1;
	 		}
	 		if(f)
	 		{
	 		    cy;
	 			cout<<x1;
	 			nl;
	 			for(int i=0;i<v.size();i++)
	 			{
	 				cout<<v[i].first<<" "<<v[i].second;
	 				nl;
	 			}
	 			no = false;
	 			break;
	 		}
	 	}
	 	if(no)
	 	{
	 	    cn;
	 	}
    }
    return 0;
}
