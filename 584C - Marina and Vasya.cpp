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

int main()
{
    ll i,j,k;
    ll n,t;
    ll t1,t2;
    string s1,s2,a;
    cin>>n>>t;
    cin>>s1>>s2;
    k=n;
    t1=n-t;t2=n-t;
    for(i=0;i<n;i++)
    {
        a.push_back('#');
    }
    i=0;
    while(i<n && t1>0 && t2>0)
    {
        if(s1[i]==s2[i])
        {
            a[i]=s1[i];
            t1--;
            t2--;
            k--;
        }
        i++;
    }
    i=0;
    while(t1 && k)
    {
        if(a[i]=='#')
        {
            a[i]=s1[i];
            t1--;
            k--;
        }
        i++;
    }
    i=0;
    while(t2 && k)
    {
        if(a[i]=='#')
        {
            a[i]=s2[i];
            t2--;
            k--;
        }
        i++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='#' && k)
        {
            for(j='a';j<='z';j++)
            {
                if(s1[i]!=j && s2[i]!=j)
                {
                    a[i]=j;
                    break;
                }
            }
        }
    }
    t1=0,t2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=s1[i])
        {
            t1++;
        }
        if(a[i]!=s2[i])
        {
            t2++;
        }
    }
    if(t==t1 && t==t2)
    {
        cout<<a;
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
