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

int N,Q;
int cnt[32];
 
int log(int X)
{
    int temp=1,i;
    for (i=0;temp<X;i++)
    {
        temp*=2;
    }
    return i;
}
int solve(int X)
{
    int ans=0;
    for (int i=31;i>=0;i--)
    {
        int take = min(cnt[i],(X/(1<<i)));
        ans += take;
        X -= take*(1<<i);
    }
    if (X > 0)
        return -1;
    return ans;
}
int main()
{
    int X;
    cin>>N>>Q;
    for (int i=0;i<N;i++)
    {
        cin>>X;
        cnt[log(X)]++;
    }
    while (Q--)
    {
        cin>>X;
        cout<<solve(X)<<endl;
    }
    return 0;
}
