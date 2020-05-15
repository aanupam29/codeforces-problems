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

int main()
{
    int64_t n, k; 
    cin>>n>>k;
    vector<int64_t> c(n);
    for(int64_t p = 0; p < n; p++)
    {
        ci(c[p]);
    }
    set<pair<int64_t, int64_t>> s;
    vector<int64_t> d(n, 0);
    int64_t rate(0);
    int64_t total(0);
    for(int64_t p = 0; p < n + k; p++)
    {
        total += rate;
        if(p < n)
        {
            s.insert(make_pair(c[p], p)); rate += c[p];
        }
        if(p >= k)
        {
            pair<int64_t, int64_t> f = *(--(s.end()));
            rate -= f.first;
            d[f.second] = p;
            s.erase(--(s.end()));
        }
    }
    co(total);
    nl;
    for(int64_t p = 0; p < n; p++)
    {
        co(1+d[p]);
        co(" ");
    }
    return 0;
}
