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

int n,a,b,i,x,y,d,m;
main()
{
    pair<int,int>c[100001];
    cin>>n>>d>>a>>b;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        c[i].first=a*x+b*y; 
        c[i].second=i;
    }
    sort(c+1,c+n+1);
    for(i=1; i<=n; i++)
    {
        d -= c[i].first;
        if(d>=0) 
            m++; 
        else 
            break;
    }
    cout<<m<<endl;
    for(i=1; i<=m; i++)
        cout<<c[i].second<<" ";
}
