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

ll power(ll x,ll y,ll p )
{
    ll res=1;
    x%=p;
    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}
int main()
{
	int n;
    cin>>n;
    vi v(5,0);
    ff(i,0,4)
    {
        v[i]=(n%10);
        n/=10;
    }
    n=0;
    n = v[4]*10000+v[2]*1000+v[0]*100+v[1]*10+v[3];
    n = power(n,5,100000);
    if(n==0)
    {
        cout<<"00000";
    }
    else if(n<=9999)
    {
        vector <int> a;
        while(n!=0)
        {
            a.push_back(n%10);
            n/=10;
        }
        for(unsigned int i=5;i>a.size();i--)
        {
            cout<<"0";
        }
        for(unsigned int i=a.size()-1;i>=0;i--)
        {
            cout<<a[i];
        }
    }
    else
    {
        cout<<n;
    }
    return 0;
}
