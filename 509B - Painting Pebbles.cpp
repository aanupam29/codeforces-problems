#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

ll f[100][100];
int main()
{
    ll i,j,k;
    ll n,m,x,w;
    cin>>n>>k;
    ll a[n];
    m=200;
    for(i=0; i<n; i++)
        cin>>a[i],m=min(m,a[i]);
    x=1;
    if(x>k)
    {
        cout<<"NO";
        return 0;
    }
    memset(f,0,sizeof(f));
    for(i=0; i<n; i++)
    {
        for(j=0; j<=m; j++)
            f[i][j]=x;
    }
    m++;x++;
    for(i=0;i<n;i++)
    {
        w=x;
        for(j=m;j<a[i];j++)
        {
            if(w>k)
            {
                cout<<"NO";
                return 0;
            }
            f[i][j]=w;
            w++;
        }
    }
    cout<<"YES"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<a[i]; j++)
            cout<<f[i][j]<<" ";
        nl;
    }
    return 0;
}
