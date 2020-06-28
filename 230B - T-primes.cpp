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

bool isPrime(long long n)
{
    int skip=0;
    if(n<2)
    {
        return false;
    }
    else if(n==2)
    {
        return true;
    }
    long long limit=sqrt(n);
    if(n%2==0)
    {
        return false;
    }
    for(int j=3; j<=limit; j+=2)
    {
        if(n%j==0)
        {
            return false;
        }
    }
        
    return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num&&isPrime(sqr)==true)
        {
            cy;
        }
        else
        {
            cn;
        }
    }
    return 0;
}
