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
    pair<lli , lli> a[n+1];
    a[0] = {0,0};
    ff(i,1,n)
    {
        cin>>a[i].first>>a[i].second;
    }
    lli ans = 1;
    lli x,y;
    for(int i=1;i<=n;i++)
    {
        x = min(a[i].first, a[i].second);
        y = max(a[i - 1].first , a[i - 1].second);
        if(x >= y)
            ans += (x - y +1);
        if(a[i - 1].first == a[i - 1].second)
            ans--;
    }
    cout<<ans;
	return 0;
}
