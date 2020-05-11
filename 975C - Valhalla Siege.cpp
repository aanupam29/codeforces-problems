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
    int i, j, k;
    int n, m, q;
    cin>>n>>q;
    lli a[n];
    memset(a, 0, sizeof(a));
    for(i = 0; i < n; i++)
    {
        cin>>m;
        if(i > 0)
            a[i] = a[i - 1] + m;
        else
            a[i] = m;
    }
    lli x, arrow = 0;
    for(i = 1; i <= q; i++)
    {
        cin>>x;
        arrow += x;
        k = lower_bound(a, a + n, arrow) - a;
        if(k >= n)
        {
            co(n);
            arrow = 0;
        }
        else
        {
            if(a[k] > arrow)
            {
                k--;
            }
            if(k == n - 1)
            {
                co(n);
                arrow = 0;
            }
            else
            {
                co(n - k - 1);
            }
        }
        nl;
    }
    return 0;
}
