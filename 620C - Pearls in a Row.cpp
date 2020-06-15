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
    ll i,j,k;
    ll n;
    map<ll,ll> mp;
    vector<pp> v;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    ll l=1,r;
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]==0)
        {
            mp[a[i]]++;
        }
        else
        {
            v.push_back(make_pair(l,i+1));
            l=i+2;
            mp.erase(mp.begin(),mp.end());
        }
    }
    if(v.size()==0)
    {
        cout<<"-1";
        return 0;
    }
    v.back().second=n;
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}
