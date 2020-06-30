#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    long n, m;
    scanf("%ld %ld\n", &n, &m);
    vector<vector<long> > grid(n + 1, vector<long>(n + 1,0));
    long count(0); 
    bool done(0);
    while(count < m && !done)
    {
        ++count;
        long x, y; 
        scanf("%ld %ld\n", &x, &y);
        for(long a = x; a < x + 3 && a <= n; a++)
        {
            for(long b = y; b < y + 3 && b <= n; b++)
            {
                ++grid[a][b];
                if(grid[a][b] == 9)
                {
                    done = 1;
                    break;
                }
            }
        }
    }
    if(done)
    {
        printf("%ld\n", count);
    }
    else
    {
        minus;
    }
    return 0;
}
