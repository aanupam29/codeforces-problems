#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll work(ll  x)
{
    ll s=1,i;
    for(i=0;i<x;i++)
        s = (s*2);
    return s;
}
int main()
{
    ll n,m,i,j;
    while(cin>>n>>m)
    {
        ll mp[111][111];
        ll ans=0;
        for(i=0;i<n;i++)
        {
            ll cnt=0;
            for(j=0;j<m;j++)
            {
                scanf("%lld",&mp[i][j]);
                if(mp[i][j]) cnt++;
            }
            ans=(ans+work(cnt)-1);
            ans=(ans+work(m-cnt)-1);
        }
        for(j=0;j<m;j++)
        {
            ll cnt=0;
            for(i=0;i<n;i++)
            {
                if(mp[i][j]) cnt++;
            }
            ans=(ans+work(cnt)-1);
            ans=(ans+work(n-cnt)-1);
        }
        cout<<ans-n*m<<endl;
    }
}
