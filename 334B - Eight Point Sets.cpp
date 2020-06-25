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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    ll x,y,z;
    ll c=8;
    set<ll> mx,my;
    set<pp> m;
    while(c--)
    {
        cin>>x>>y;
        mx.insert(x);
        my.insert(y);
        m.insert({x,y});
    }
    c=sz(m);
    if(sz(mx)!=3 or sz(my)!=3 or c!=8)
    {
        cout<<"ugly";
    }
    else
    {
        set<ll>::iterator i,j;
        i=mx.begin();
        i++;
        j=my.begin(); 
        j++;
        if(m.count({*i, *j}))
        {
            cout<<"ugly";
        }
        else
        {
            cout<<"respectable";
        }
    }
    return 0;
}
