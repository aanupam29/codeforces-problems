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

const long long N=228228;
vector<long long> a[N];
long long c[N],o,x,y,i,j,n,m;
void go(int v,int pr,int k)
{
	if(k>m)
	{
	    return;
	}
	int ok=1;
	for(int i=0;i<a[v].size();i++)
	{
	    if(a[v][i]!=pr)
	    {
	        ok=0;
	        go(a[v][i], v, k*c[a[v][i]]+c[a[v][i]]);
	    }
	}
	o+=ok;
}
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
	    cin>>c[i];
	}
	for(i=1;i<n;i++)
	{
	    scanf("%d%d",&x,&y);
	    x--;
	    y--;
	    a[x].pb(y);
	    a[y].pb(x);
	}
	go(0,-1,c[0]);
	cout<<o<<"\n";
}
