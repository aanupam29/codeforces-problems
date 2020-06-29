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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 111

int p[1001][1001], row[1001], col[1001];
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int r = 1; r <= n; ++r)
    {
        row[r] = r;
    }
    for (int c = 1; c <= m; ++c)
    {
        col[c] = c;
    }
    for (int r = 1; r <= n; ++r)
    {
        for (int c = 1; c <= m; ++c)
        {
            scanf("%d", &p[r][c]);
        }
    }

    while (k--)
    {
        char s[2];
        int x, y;
        scanf("%s%d%d", s, &x, &y);
        switch (s[0])
        {
            case 'r':
                swap(row[x], row[y]);
                break;
            case 'c':
                swap(col[x], col[y]);
                break;
            case 'g':
                printf("%d\n", p[row[x]][col[y]]);
                break;
            default:
                break;
        }
    }
    return 0;
}
