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

int n,m,s,f,t,l,r,d,T=1;
int main()
{
    scanf("%d%d%d%d",&n,&m,&s,&f);
    d=s<f?1:-1;
    scanf("%d%d%d",&t,&l,&r);
    while(1) 
    {
        while(T<t&&s!=f) 
        {
            ++T;
            s += d;
            putchar(d==1?'R':'L');
        }
        if(s==f)
        {
            return 0;
        }
        if(s>=l&&s<=r||s+d>=l&&s+d<=r)
        {
            putchar('X');
        }
        else
        {
            s += d;
            putchar(d==1?'R':'L');
        }
        ++T;
        if(--m)
        {
            scanf("%d%d%d",&t,&l,&r);
        }
        else
        {
            t = INT_MAX;
        }
    }
}
