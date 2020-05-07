#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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
 
int main() 
{
    fast
    int n;
    cin>>n;
    int m[n];
    lli x,maxim[n] = {0};
    lli ans=0;
    ff(i,0,n-1)
    {
        cin>>m[i];
        ff(j,0,m[i]-1)
        {
            cin>>x;
            maxim[i] = max(x,maxim[i]); 
        }
        ans = max(ans,maxim[i]);
    }
    x = 0;
    ff(i,0,n-1)
    {
        x += (ans - maxim[i])*m[i];
    }
    cout<<x;
	return 0;
}
