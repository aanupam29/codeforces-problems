#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define f(i,a,b)   for(ll i=a;i<b;i++)
int main()
{
    ll n,x,y;
    cin>>n;
    map<ll,ll> freq;
    ll a;
    f(i,0,n)
    {
        cin>>a;
        freq[a]++;
    }
    vector <pair<ll,pair<ll,ll> > >v;
    ll m;
    cin>>m;
    ll q[m],w[m];
    f(i,0,m)
    {
        cin>>q[i];
    }
    f(i,0,m)
    {
        cin>>w[i];
    }
    f(i,0,m)
    {
        v.push_back(make_pair(freq[q[i]],make_pair(freq[w[i]],i)));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0].second.second+1;
    return 0;
}
