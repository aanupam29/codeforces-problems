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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

const int MAX=1e3+9;
int n,m,x,u[MAX];
string s;
map<string,int> pt;
int main()
{
	cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>x;
        pt[s]=max(pt[s],x);
    }
    for(auto& c:pt)
    {
        u[m++]=c.second;
    }
    sort(u,u+m);
	cout<<n;
    nl;
    for(auto& c:pt)
	{
		cout<<c.first<<' ';
        x = u + m - upper_bound(u,u+m,c.second);
        if(2*x>m) 
        {
            cout<<"noob\n";
        }
        else if(5*x>m) 
        {
            cout<<"random\n";
        }
        else if(10*x>m)
        {
            cout<<"average\n";
        }
        else if(100*x>m)
        {
            cout<<"hardcore\n";
        }
        else
        {
            cout<<"pro\n";
        }
    }
}
