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
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int i, j, k;
    int n, m, t;
    ll x, y;
    cin>>n>>m;
    cin>>k>>t;
    set<ll> s;
    vector<ll> vec;
    while(k--)
    {
        cin>>x>>y;
        x--;
        vec.pb(x * m + y);
    }
    sort(vec.begin(), vec.end());
    ll pos;
    while(t--)
    {
        cin>>x>>y;
        x--;
        pos = x * m + y;
        k = 0, j = 0;
        for(int e : vec)
        {
            if(e < pos)
                k++;
            else if(e == pos)
                j = 1;
            else
                break;
        }
        pos -= k;
        pos = pos % 3;
        if(j)
        {
            co("Waste");
        }
        else if(pos == 1)
        {
            co("Carrots");
        }
        else if(pos == 2)
        {
            co("Kiwis");
        }
        else
        {
            co("Grapes");
        }
        nl;

    }
    return 0;
}
