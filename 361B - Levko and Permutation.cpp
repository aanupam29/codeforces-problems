#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k>=n)
    {
        cout<<-1;
        return 0;
    }
    k = n-k;
    for(int i=2;i<=k;i++)
    {
        cout<<i<<" ";
    }
    cout<<1<<" ";
    for(int i=k+1;i<=n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
