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
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    long long n,m;
    long long x,y;
    long long k;
    cin>>n>>m;
    cin>>x>>y;
    cin>>k;
    long long steps = 0;
    long long dx,dy;
    for(long long i=0;i<k;i++)
    {
        long long fac1,fac2;
        cin>>dx>>dy;
        if(dx>0)
        {
            fac1 = (n-x)/dx;
        } 
        else if(dx<0)
        {
            fac1 = (x-1)/(-1*dx);
        }
        else
        {
            fac1=INT_MAX;
        }
        if(dy>0)
        {
            fac2 = (m-y)/dy;
        } 
        else if(dy<0)
        {
            fac2 = (y-1)/(-1*dy);
        }
        else
        {
            fac2=INT_MAX;
        }
        long long finalfac = min(fac1,fac2);    
        x += dx*finalfac;
        y += dy*finalfac;
        steps += finalfac;
        
    }
    cout<<steps;
}
