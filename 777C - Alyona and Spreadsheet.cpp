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

int main() 
{
    int n,m,k,l,r;
    scanf("%d%d",&n,&m);
    int incrs[n+1][m+1];
    memset(incrs,0,sizeof(incrs));
    for(int j=1;j<=m;j++)
    {
        incrs[1][j]=1;
    }
    int grid[n+1][m+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&grid[i][j]);
        }
    }
    for(int j=1;j<=m;j++)
    {
        for(int i=2;i<=n;i++)
        {
            if(grid[i][j]>=grid[i-1][j])
            {
                incrs[i][j]=incrs[i-1][j]+1;
            }
            else 
                incrs[i][j]=1;
        }
    }
    map< pair<int,int> , bool>M;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d%d",&l,&r);
        bool ok=false;
        if(M.find(make_pair(l,r))==M.end())
        {
            for(int j=1;j<=m;j++)
            {
                int tot=(r-l);
                if(incrs[r][j]-incrs[l][j]==tot)
                {
                    ok=true;
                    break;
                }
            }
            if(ok) 
                printf("Yes\n");
            else 
                printf("No\n");
                M[make_pair(l,r)]=ok;
        }
        else 
        {
            ok = M[make_pair(l,r)];
            if(ok) 
                printf("Yes\n");
            else 
                printf("No\n");
        }
    }
}
