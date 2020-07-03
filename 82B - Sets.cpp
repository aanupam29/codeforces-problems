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
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int n,m,i,j,k,a[202],b[202][202];
bool f[202],u[202];
main(){
	scanf("%d",&n);
	for(i=0;i<(n*(n-1))/2;i++)
	{
		scanf("%d",&m);
   	 	for(j=0;j<m;j++)
   	 	{
			scanf("%d",&a[j]);
			if(n==2)
			{
				if(j==0)
				    printf("1 %d\n",a[j]);
				else if(j==1)
				    printf("%d %d",m-1,a[j]);
				else 
					printf(" %d",a[j]);
			}
			f[a[j]]=true;
			for(k=0;k<j;k++)
			{
				b[a[k]][a[j]]++;
				b[a[j]][a[k]]++;
			}
		}
	}
	if(n==2)
	{
		return 0;
	}
	for(i=1;i<=200;i++)
	{
	    if(f[i] && !u[i])
		{
			for(m=j=1;j<=200;j++)
			{
				if(b[i][j]==n-1)
				    m++;
			}
			printf("%d %d",m,i);
			u[i]=1;
			for(j=1;j<=200;j++)
			{
			    if(b[i][j]==n-1)
			    {
				    printf(" %d",j);
				    u[j]=1;
			    }
			}
			puts("");
		}
	}
}
