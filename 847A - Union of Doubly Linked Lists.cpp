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

pp a[101];
int main()
{
    int i, j, k;
    int n, m;
    int l, r;
    cin>>n;
    vector<int> vec, vec2;
    for(i = 1; i <= n; i++)
    {
        cin>>l>>r;
        a[l].second = i;
        a[r].first = i;
        if(!l)
        {
            vec.pb(i);
        }
    }
    for(int e : vec)
    {
        while(e)
        {
            k = e;
            e = a[e].second;
        }
        vec2.pb(k);
    }
    for(i = 0; i < vec.size() - 1; i++)
    {
        a[vec2[i]].second = vec[i + 1];
        a[vec[i + 1]].first = vec2[i];
    }
    for(i = 1; i <= n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second;
        nl;
    }
    return 0;
}
