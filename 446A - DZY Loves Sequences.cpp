#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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

int main()
{
    int n;
    cin>>n;
    int a[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int r[n]={};
    int l[n]={};
    r[n-1]=1;l[0]=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            l[i]=l[i-1]+1;
        }
        else 
        {
            l[i]=1;
        }
        if(a[n-i-1]<a[n-i])
        {
            r[n-i-1]=r[n-i]+1;
        }
        else
        {
            r[n-i-1]=1;
        }
    }
    if(n<3)
    { 
        cout<<n; 
        return 0;
    }
    int ans = max(1+r[1],1+l[n-2]);
    for(int i=1;i<n-1;i++)
    {
        if(a[i+1]-a[i-1]>=2)
        {
            ans = max(ans,l[i-1]+r[i+1]+1);
        }
        else 
        {
            ans = max(ans,max(l[i-1]+1,r[i+1]+1));  
        }
    }
    cout<<ans;
}
