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
#define mx 10000000

bool isprime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
ll a[mx+1]= {0};
void prime_sieve()
{
    a[0]=0;
    a[1]=0;
    a[2]=1;
    for(ll i=3; i<=mx; i=i+2)
    {
        a[i]=1;
    }
    for(ll i=3; i<=mx; i=i+2)
    {
        if(a[i]==1)
        {
            for(ll j=i*i; j<=mx; j=j+i)
            {
                a[j]=0;
            }
        }
    }
}
int main()
{
    vector<int>v;
    prime_sieve();
    ll n;
    cin>>n;
    if(isprime(n))
    {
        cout<<1<<endl<<n;
        return 0;
    }
    if(isprime(n-2))
    {
        cout<<2<<endl<<2<<" "<<n-2;
        return 0;
    }
    else
    {
        n=n-3;
        cout<<3<<endl;
        for(ll i=2;i<=n;i++)
        {
            if(a[i]==1 && isprime(n-i))
            {
                cout<<3<<" "<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
}
