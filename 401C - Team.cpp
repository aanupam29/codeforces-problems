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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int zero, o;
    cin>>zero>>o;
    if(o<zero-1 || o>(2*zero+2))
    {
        minus;
        ret;
    }
    if(o == zero-1)
    {
        cout<<"0";
        forn(i,o)
        {
            cout<<"10";
        }
        puts("");
        return 0;
    }
    while(o>0 && zero>0)
    {
        if(o<2*zero)
        {
            cout<<"10";
            o--;
            zero--;
        }
        else
        {
            cout<<"110";
            o -= 2;
            zero--;
        }
    }
    forn(i,o)
    {
        cout<<"1";
    }
}
