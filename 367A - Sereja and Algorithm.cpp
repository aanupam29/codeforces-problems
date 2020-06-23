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

int pre[100010][3];
int main()
{
	int i,j,m,l,r,diff[3];
	string s;
	cin>>s>>m;
	for(i=1;i<=s.size();i++)
	{
		for(j=0;j<3;j++)
		{
			pre[i][j]=pre[i-1][j] + (s[i-1]=='x'+j);
		}
	}
	while(m--)
	{
		scanf("%d%d",&l,&r);
		for(j=0;j<3;j++)
		{
			diff[j] = pre[r][j]-pre[l-1][j];
		}	
		sort(diff,diff+3);
		if(r-l+1<3 || diff[2]-diff[0]<=1)
		{
			cy;
		}
		else
		{
			cn;
		}
	}
	return 0;
}
