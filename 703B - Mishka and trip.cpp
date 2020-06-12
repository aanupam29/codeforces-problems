#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    ll n,k,i,ans=0;
    cin>>n>>k;
    ll a[n+10],b[k+10],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(i=0;i<n;i++)
        ans+=(a[i]*a[(i+1)%n]);
    ll vis[n+10]={0};
    for(i=1;i<=k;i++)
    {
        ll x;
        cin>>x;
        x--;
        sum-=a[x];
        if(!vis[(x+1)%n])
        {
            sum-=a[(x+1)%n];
        }
        if(!vis[(x-1+n)%n])
        {
            sum-=a[(x-1+n)%n];
        }
        ans+=(a[x]*sum);
        if(!vis[(x+1)%n])
        { 
            sum+=a[(x+1)%n];
        }
        if(!vis[(x-1+n)%n])
        {
            sum+=a[(x-1+n)%n];
        }
        vis[x]=1;
    }
    cout<<ans;
    return 0;
}
