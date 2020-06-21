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

int const N = 3001;
int n, g[N][N], x, y, xx, yy;
long long dp1[2 * N], dp2[2 * N], sol1 = -1, sol2 = -1;
int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            scanf("%d", &g[i][j]);
            dp1[i + j] += g[i][j];
            dp2[i - j + n] += g[i][j];
        }
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j) 
        {
            long long v = dp1[i + j] + dp2[i - j + n] - g[i][j];
            if((i + j) & 1)
            {
                if(v > sol2)
                {
                    sol2 = v;
                    xx = i;
                    yy = j;
                }
            }
            else 
            {
                if(v > sol1)
                {
                    sol1 = v;
                    x = i;
                    y = j;
                }
            }
        }
    }
    printf("%lld\n", sol1 + sol2);
    printf("%d %d %d %d\n", x, y, xx, yy);
    return 0;
}
