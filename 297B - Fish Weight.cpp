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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int a[100003],b[100003],n,m,k,i;
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=m;i++)
    {
        scanf("%d",&b[i]);
    }
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    while(n>0&&m>0)
    {
        if (b[m]>=a[n])
        {
            m--;
            n--;
        }
        else
        {
            break;
        }
    }
    if (n>0)
    {
        cy;
    }
    else
    {
        cn;
    }
}
