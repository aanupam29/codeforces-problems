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

ll square(int x)
{
    return x * (ll) x;
}
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    vector< pair<ll, ll> > dist(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dist[i].first = square(x - x1) + square(y - y1);
        dist[i].second = square(x - x2) + square(y - y2);
    }
    sort(dist.begin(), dist.end());
    vector<ll> maxsuf(n + 1);
    for (int i = n - 1; i >= 0; i--) 
    {
        maxsuf[i] = max(maxsuf[i + 1], dist[i].second);
    }
    ll result = min(dist[n - 1].first, maxsuf[0]);
    for (int i = 0; i < n; i++)
    {
        ll r1 = dist[i].first;
        ll r2 = maxsuf[i + 1];
        result = min(result, r1 + r2);
    }
    cout<<result;
}
