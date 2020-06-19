#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,b)        for(int i=0;i<b;i++)
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

int main()
{
    ll m,n,t,c,b,g,d,i,j,k,x,y,z,l,q,flag=1;
    cin>>n>>m;
    ll boy[n+1]={0} ,girl[m+1]={0};
    cin>>b;
    ff(i,b)
    {
        cin>>x;  
        boy[x]=1;
    }
    cin>>g;
    ff(i,g)
    {
        cin>>y; 
        girl[y]=1;
    }
    ff(i,2*m*n+1) 
        if(boy[i%n] || girl[i%m])
        {
            boy[i%n]=1;
            girl[i%m]=1;
        }
    ff(i,n) 
    {
        if(!boy[i])
            flag=0;
    }
    ff(i,m)
    {
        if(!girl[i])
            flag=0;
    }
    if(flag) 
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
}
