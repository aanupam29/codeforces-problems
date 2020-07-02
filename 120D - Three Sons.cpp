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

int a[55][55];
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,m,x,re=0,A,B,C;
	cin>>m>>n; 
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			a[i][j]=a[i][j-1]+a[i-1][j]-a[i-1][j-1]+x;
		}
	}
	cin>>A>>B>>C;
	vector<int>s;
	s.push_back(A);
	s.push_back(B);
	s.push_back(C);
	sort(s.begin(),s.end());
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			vector<int>ss;
			ss.push_back(a[m][i]);
			ss.push_back(a[m][j]-a[m][i]);
			ss.push_back(a[m][n]-a[m][j]);
			sort(ss.begin(),ss.end());
			re+=ss==s;
		}
	}
	for(int i=1;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			vector<int>ss;
			ss.push_back(a[i][n]);
			ss.push_back(a[j][n]-a[i][n]);
			ss.push_back(a[m][n]-a[j][n]);
			sort(ss.begin(),ss.end());
			re+=ss==s;
		}
	}
	cout<<re<<endl;
	return 0;
}
