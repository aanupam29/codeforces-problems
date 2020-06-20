#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
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
    ll c = 0, n = 0, p=1, i;
    vector<ll> d(1<<21,0);
    string m;
    cin>>m;
    n = l(m);
    ll a,b;
    cin>>a>>b;
    for (i=n-1; i>=0; i--) 
    {
        d[i] = ((m[i] - '0') * p + d[i + 1]) % b;
        p = p * 10 % b;
    }
    for (i=1; i<n; i++) 
    {
        c = (c * 10 + m[i - 1] - '0') % a;
        if (!c && !d[i] && m[i] != '0') 
        {
            cy;
            printf("%s\n%s\n", m.substr(0,i).c_str(), m.substr(i).c_str());
            return 0;
        }
    }
    cn;
    return 0; 
}
