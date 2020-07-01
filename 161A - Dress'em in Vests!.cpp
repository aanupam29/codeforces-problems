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
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int n, m, x, y, a[100000], b[100000];
    scanf("%d%d%d%d", &n, &m, &x, &y);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < m; ++j)
    {
        scanf("%d", &b[j]);
    }
    int count(0);
    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (b[j] < a[i] - x)
        {
            ++j;
        }
        else if (b[j] > a[i] + y)
        {
            ++i;
        }
        else
        {
            a[count] = ++i;
            b[count] = ++j;
            ++count;
        }
    }
    printf("%d\n", count);
    for (int k = 0; k < count; ++k)
    {
        printf("%d %d\n", a[k], b[k]);
    }
    return 0;
}
