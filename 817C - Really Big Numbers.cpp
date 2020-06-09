#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sum_of_digit(ll n)
{
    ll sm=0;
    while(n!=0)
    {
        sm+=n%10;
        n/=10;
    }
    return sm;
}
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,mid,ans=0;
    cin>>n>>k;
    l=1,r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        if( (mid- sum_of_digit(mid)) >=k)
        {
            ans=n-mid+1;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans;
return 0;
}
