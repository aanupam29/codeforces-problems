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

int main(void)
{
    int h,m,s,t1,t2,ans=0;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)
    {
        swap(t1,t2);
    }
    if(h>=t1&&h<t2)
    {    
        ans++;
    }
    if(m>=t1*5&&m<t2*5)
    {
        ans++;
    }
    if(s>=t1*5&&s<t2*5)
    {
        ans++;
    }
    if(ans==0||ans==3)
    {
        cy;
    }
    else
    {
        cn;
    }
    return 0;
}
