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
#define forn(i,n)      for(int i=0;i<n;i++)
#define ld             double

int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=1)
        {
            minus;
            ret;
        }
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]<=1)
        {
            minus;
            ret;
        }
    }
    double s=m;
    s+=s/(a[0]-1);
    for(int i=n-1;i>=1;i--)
    {
        s+=s/(b[i]-1);
        s+=s/(a[i]-1);
    }
    s+=s/(b[0]-1);
    printf("%.10lf\n",s-m);
    return 0;
}
