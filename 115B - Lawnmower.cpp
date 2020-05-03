#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    fast
    int n,m,ans=0;
    scanf("%d%d",&n,&m);
    char a[n+1][m+1];
    getchar();
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            a[i][j]=getchar();
        getchar();
    }
    int lasti=1,lastj=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=m;j++)
                if(a[i][j]=='W')
                {
                    ans += abs(i-lasti) + abs(j-lastj);
                    lasti = i;
                    lastj = j;
                }
        }
        else
        {
            for(j=m;j>0;j--)
            if(a[i][j] == 'W')
            {
                ans += abs(i-lasti) + abs(j-lastj);
                lasti = i;
                lastj = j;
            }
        }
    }
    co(ans);
    return 0;
}
