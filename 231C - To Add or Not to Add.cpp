#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 111

#define DN 100005
long long sp[DN];
int n,k,sir[DN];
int check(int nr)
{
    for(int i=nr; i<=n; ++i) 
    {
        long long sum=sp[i]-sp[i-nr];
        if(nr*1LL*sir[i]-sum <= k) 
        {
            return sir[i];
        }
    }
    return 0;
}
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; ++i) 
    {
        cin>>sir[i];
    }
    sort(sir+1,sir+n+1);
    for(int i=1; i<=n; ++i)
    {
        sp[i]=sp[i-1]+sir[i];
    }
    int ls=1,ld=n,rez=0;
    for(;ls<=ld;) 
    {
        int m=(ls+ld)/2;
        if(check(m)) 
        {
            rez=m;
            ls=m+1;
        }
        else 
        {
            ld=m-1;
        }
    }
    cout<<rez<<' '<<check(rez);
    return 0;
}
