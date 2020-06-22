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

int main() 
{
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> a[2];
    forn(i, n)
    {
        int cur;
        cin >> cur;
        a[cur % 2].pb(cur);
    }
    if(sz(a[1]) < k - p)
    {
        puts("NO");
        exit(0);
    }
    vector<vector<int> > ans(k);
    forn(i, k - p)
    {
        ans[i].pb(a[1].back());
        a[1].pop_back();
    }
    if(sz(a[1]) % 2 != 0)
    {
        puts("NO");
        exit(0);
    }
    if(sz(a[0]) + sz(a[1]) / 2 < p)
    {
        puts("NO");
        exit(0);
    }
    ff(i, k - p, k)
    {
        if(!a[0].empty())
        {
            ans[i].pb(a[0].back());
            a[0].pop_back();
        }
        else
        {
            forn(step, 2)
            {
                ans[i].pb(a[1].back());
                a[1].pop_back();
            }
        }
    }
    forn(j, 2)
    {
        forn(i, sz(a[j]))
        {
            ans[0].pb(a[j][i]);
        }
    }
    puts("YES");
    forn(i, sz(ans))
    {
        printf("%d", sz(ans[i]));
        forn(j, sz(ans[i]))
        {
            printf(" %d", ans[i][j]);
        }
        puts("");
    }
    return 0;
}
