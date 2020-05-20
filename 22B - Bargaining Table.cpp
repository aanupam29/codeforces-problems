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

const int N=30;
int n,m,i,j,a,k,l,s[N][N],ans;
int main(){
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%1d",&a),
			s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+1-a;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			for(k=i+1;k<=n;k++)
				for(l=j+1;l<=m;l++)
					if(s[k][l]-s[k][j]-s[i][l]+s[i][j] == (k-i)*(l-j))
						ans=max(ans,2*(k-i+l-j));
	cout<<ans;
}
