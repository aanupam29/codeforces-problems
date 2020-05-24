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
#define M              1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

const ll mod=100000000;

int main()

{
   int n1,n2,k1,k2;
   cin>>n1>>n2>>k1>>k2;
   ll dp[n1+1][n2+1][k1+1][k2+1];
   memset(dp,0,sizeof(dp));
   for(int i=0;i<=n1;i++)
   {
       for(int j=0;j<=n2;j++)
       {
           for(int k=0;k<=k1;k++)
           {
               for(int f=0;f<=k2;f++)
               {
                   ll ans=0ll;
                   if(i==0&&j==0) 
                   {
                       ans=1ll;
                   }
                   else
                   {
                        ans=0ll;
                        if(k>0&&i>0) 
                        {
                            ans += dp[i-1][j][k-1][k2]%mod;
                        }
                        if(j>0&&f>0) 
                        {
                            ans+=dp[i][j-1][k1][f-1]%mod;
                        }
                   }
                   dp[i][j][k][f]=ans%mod;
               }
           }
       }
   }
   cout<<dp[n1][n2][k1][k2]<<endl;
    return 0;
}
