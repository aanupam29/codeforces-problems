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
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

int x,y,z, cnt;
void solve(int n,int m)
{
    if(m==0)
    {
        if(n==x)
        {
            cnt++;
        }
        return;
    }
    solve(n+1,m-1);
    solve(n-1,m-1);
}
int main()
{
    int i,j,k;
    int n,m;
    string s;
    cin>>s;
    x=0;
    for(i=0;i<l(s);i++)
    {
        if(s[i]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cin>>s;
    y=0;
    z=0;
    for(i=0;i<l(s);i++)
    {
         if(s[i]=='+')
         {
            y++;
         }
        else if(s[i]=='-')
        {
            y--;
        }
        else
        {
            z++;
        }
    }
    solve(y,z);
    float ans=(1.0/pow(2,z))*cnt;
    printf("%.15f",ans);
    return 0;
}
