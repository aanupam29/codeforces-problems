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
    fast;
    long n, m; 
    cin>>n>>m;
    li cnt(0);
    vector<li> a(n + 1, 0);
    li x; 
    for(li p = 0; p < m; p++)
    {
        cin>>x;
        if(a[x] == 0)
        {
            ++cnt;
        }
        a[x]++;
        if(cnt == n)
        {
            cnt = 0;
            for(long u = 1; u <= n; u++)
            {
                a[u]--; 
                cnt += (a[u] > 0);
            }
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }
    return 0;
}
