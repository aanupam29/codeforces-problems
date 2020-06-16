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

int a[1000005],dp[1001][1001]={0};
int main()
{
	int n,m;cin>>n>>m;
	for(int x=1;x<=n;x++)
	{
		scanf("%d",&a[x]);
		a[x]%=m;
		if(a[x]%m==0)
		{
		printf("YES");
		return 0;
		}	
	}
	if(n>=m)
	{
		printf("YES");
		return 0;
	}	
	else
	{
		dp[0][0]=1;
		for(int i=1;i<=n;i++)
        {
            for(int j=m-1;j>=0;j--)
            {
                int x=((j-a[i])%m+m)%m;
                if (dp[i-1][x])
                {
                    dp[i][j]=1;
                    if (j==0) 
                    {
                        printf("YES");
                        return 0;
    				}
                }
                if(dp[i-1][j])
    			dp[i][j]=1;
            }	
        }
	}
	printf("NO");
	return 0;
}
