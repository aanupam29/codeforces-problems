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

int main() 
{
    fast
    ll n, k; std::cin >> n >> k;
    vector<ll> v(n); 
    for(ll p = 0; p < n; p++)
    {
        cin >> v[p];
    }
    string s;
    cin >> s;
    long idx(0); ll dmg(0);
    while(idx < n)
    {
        char x = s[idx];
        vector<ll> a;
        while(idx < n && s[idx] == x)
        {
            a.push_back(v[idx]);
            ++idx;
        }
        sort(a.rbegin(), a.rend());
        for(ll p = 0; p < a.size() && p < k; p++)
        {
            dmg += a[p];
        }
    }
    cout << dmg;
    nl;
    return 0;}
