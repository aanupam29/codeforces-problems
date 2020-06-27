#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
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
#define mi             map<int,int>
#define sz(v)          int((v).size())
#define MOD 1000000007

int main()
{
    ll i,j,k;
    ll n,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    pp s[m];
    for(i=0;i<m;i++)
    {
        cin>>k>>j;
        s[i] = {k,j};
    }
    ll cw=0,ch=0;
    for(i=0;i<m;i++)
    {
        if(cw < s[i].first)
        {
            ch = max(ch,a[s[i].first-1]);
            cout<<ch<<endl;
            ch += s[i].second;
            cw = s[i].first;
        }
        else
        {
            cout<<ch<<endl;
            ch+=s[i].second;
        }
    }
    return 0;
}
