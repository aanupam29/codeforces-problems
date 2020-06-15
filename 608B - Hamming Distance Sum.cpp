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
    string a,b; 
    cin>>a>>b;
    ll ans = 0;
    int len = a.length();
    int f[b.length()+1][2];
    memset(f,0,sizeof(f));
    for(int i = 1;i < b.length()+1;i++)
    {
        if(b[i-1] == '0')
        {
            f[i][0] = f[i-1][0] + 1;
            f[i][1] = f[i-1][1] + 0;
        }
        else
        {
            f[i][0] = f[i-1][0] + 0;
            f[i][1] = f[i-1][1] + 1;
        }
    }
    for(int i = 0;i < len;i++)
    {
        ans += abs((int)(a[i] - '0'))*(int)(f[b.length() - len + i + 1][0] - f[i][0]);
        ans += abs((int)(a[i] - '1'))*(int)(f[b.length() - len + i + 1][1] - f[i][1]);
    }
    cout<<ans;
}
