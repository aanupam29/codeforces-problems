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
    fast;
    string a;
    cin>>a;
    int A=-1,B=-1,C=-1,D=-1,cnt=0;
    int len = l(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]=='[')
        {
            A=i;
            break;
        }
    }
    for(int i=len-1;i>A;i--)
    {
        if(a[i]==']')
        {
            B=i;
            break;
        }
    }
    for(int i=A+1;i<B;i++)
    {
        if(a[i]==':')
        {
            C=i;
            break;
        }
    }
    for(int i=B-1;i>C;i--)
    {
        if(a[i]==':')
        {
            D=i; 
            break;
        }
    }
    for(int i=C;i<D;i++)
    {
        if(a[i]=='|') 
            cnt++;
    }
    if(A==-1 || B==-1 || C==-1 || D==-1)
    {
        minus;
    }
    else
    {
        cout<<cnt+4;
    }
    return 0;
}
