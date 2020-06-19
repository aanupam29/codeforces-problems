#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n; 
    cin>>n;
    vector<ll> a(10, 1);
    ll prod = 1;
    for(int i = 0; ; i++)
    {
        if(i==10)
            i = 0;
        if(prod>=n) 
            break;
        prod /= a[i];
        a[i]++;
        prod *= a[i];
    }
    string p = "codeforces";
    int i = 0;
    for(ll x : a)
    {
        for(int j = 0; j<x; j++) 
            cout<<p[i];
        i++;
    }
    return 0;
}
