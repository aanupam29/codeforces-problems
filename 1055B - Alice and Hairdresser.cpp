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

#define MAXN 200000
int a[MAXN];
int main() 
{
    int n, m, l; 
    cin>>n>>m>>l;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int groups = a[0] > l;
    for(int i = 1; i < n; i++) 
    {
        if(a[i - 1] <= l && a[i] > l)
        {
            groups++;
        }
    }
    w(m) 
    {
        int ti; 
        cin>>ti;
        if(ti == 0)
        {
            cout<<groups;
            nl;
        }
        else 
        {
            int p, d; 
            cin>>p>>d;
            if(a[--p] > l)
            {
                continue;
            }
            a[p] += d;
            if(a[p] > l)
            {
                bool lGroup = p > 0 && a[p - 1] > l;
                bool rGroup = p < n - 1 && a[p + 1] > l;
                if(!lGroup && !rGroup)
                {
                    groups++;
                }
                if(lGroup && rGroup)
                {
                    groups--;
                }
            }
        }
    }
    return 0;
}
