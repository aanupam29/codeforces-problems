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

int main()
{
    int i,n,m,a,b,c;
    cin>>n>>m;
    map<int,int>color;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(!color[a] && !color[b] && !color[c])
        {
            color[a]=1;
            color[b]=2;
            color[c]=3;
        }
        else if(color[a])
        {
            if(color[a]==1) 
                color[b]=2,color[c]=3;
            else if(color[a]==2)    
                color[b]=3,color[c]=1;
            else 
                color[b]=1,color[c]=2;
        }
        else if(color[b])
        {
            if(color[b]==1)
                color[a]=2,color[c]=3;
            else if(color[b]==2) 
                color[a]=3,color[c]=1;
            else
                color[a]=1,color[c]=2;
        }
        else if(color[c])
        {
            if(color[c]==1)
                color[b]=2,color[a]=3;
            else if(color[c]==2) 
                color[b]=3,color[a]=1;
            else 
                color[b]=1,color[a]=2;
        }
    }
    for(i=1;i<=n;i++) 
    {
        cout<<color[i]<<" ";
    }
    return 0;
}
