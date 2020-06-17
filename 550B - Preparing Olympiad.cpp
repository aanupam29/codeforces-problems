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
    long int i,j,x,l,r,n,m,mx,mn,sum,val,ans,a[100001];
    cin>>n>>l>>r>>x;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ans=0;
    for(i=0; i<(1<<n); i++)
    {
        mx=-1;
        mn=1000000;
        sum=0;
        for(j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum += a[j];
                mx = max(mx,a[j]);
                mn = min(mn,a[j]);
            }
        }
        if(l<=sum && sum<=r && (mx-mn)>=x)
        {        
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
