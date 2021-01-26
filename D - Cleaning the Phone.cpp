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
#define vi             vector<ll>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define rv(v)          reverse(v.begin(),v.end())

int main()
{
    fast;
    int t;
    cin>>t;
    w(t)
    {
        int n;
        ll m;
        cin>>n>>m;
        ll a[n];
        vi vec1, vec2;
        ll sum = 0;
        ff(i,0,n)
        {
            cin>>a[i];
            sum += a[i];
        }
        int b;
        ff(i,0,n)
        {
            cin>>b;
            if(b-1)
            {
                vec2.pb(a[i]);
            }
            else
            {
                vec1.pb(a[i]);
            }
        }
        if(sum < m)
        {
            minus;
            continue;
        }
        sum = 0;
        sv(vec1);
        sv(vec2);
        rv(vec2);
        rv(vec1);
        int ind = -1;
        ll ans=0,mn=INT_MAX;
        for(int i=0;i<vec2.size();i++)
        {
            if(sum < m)
            {
                sum += vec2[i];
                ind = i;
                ans += 2;
            }
            else
            {
                break;
            }
        }
        if(sum >= m)
        {
            mn = ans;
        }
        for(int i=0;i<vec1.size();i++)
        {
            sum += vec1[i];
            ans++;
            while(ind>=0 && sum-vec2[ind]>=m)
            {
                sum -= vec2[ind--];
                ans -= 2;
            }
            if(sum >= m)
            {
                mn = min(ans, mn);
            }
        }
        cout<<mn;
        nl;
    }
    return 0;
}
