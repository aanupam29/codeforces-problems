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
bool cmp(ll a, ll b)
{
    ll x=10-(a%10);
    ll y=10-(b%10);
    if(x==0)
    {
        return x>y;
    }
    else
    {    
        return x<y;
    }
}
int main()
{
    ll i,j,k;
    ll n,p,x;
    cin>>n>>p;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    {
        x=10-(a[i]%10);
        if(p<x)
        {
            break;
        }
        if(a[i]==100)
        {
            continue;
        }
        a[i]+=x;
        p-=x;
    }
    for(i=0;i<n;i++)
    {
        if(p<=0 || p<10)
        {
            break;
        }
        if(a[i]==100)
        {
            continue;
        }
        x=100-a[i];
        if(x<p)
        {
            a[i] = 100;
            p -= x;
        }
        else
        {
            a[i]+=p;
            break;
        }
    }
    ll sum=0;
    for(i=0;i<n;i++)
        sum+=(a[i]/10);
    cout<<sum;
    return 0;
}
