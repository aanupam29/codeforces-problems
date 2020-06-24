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
	int k,x,y;
	cin >> k;
	set<int> s;
	vector<int> v(k);
	bool flag1 = false,flag2 = false;
	for(int i=0;i<k;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{
		x = v[i];
		if(x == 0 || x == 100)
		{
			s.insert(x);
		}
		else if (x < 10 && !flag1)
		{
			s.insert(x) ;
			flag1 = true;
		}
		else if (x % 10 == 0 && !flag2)
		{
			s.insert(x) ;
			flag2 = true;
		}
		else
		{
 			if(!flag1 && !flag2) 
 			{
 			    s.insert(x);
 			    flag1=true;
 			    flag2=true;
 			}
		}
	}
	cout << s.size() << endl ;
	for(auto it : s)
	{
		cout << it << " ";
	}
	return 0;
}
