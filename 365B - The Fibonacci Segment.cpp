#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i]; 
    }
    if(n==1||n==2) 
    {
        cout<<n; 
        return;
    }
    ll ans=2;
    ll final=-1;
    for(ll i=2;i<n;i++)
    {
        if(arr[i] == (arr[i-1] + arr[i-2])) 
        {
            ans++;
        }
        else
        {
            ans = 2;
        }
        final = max(final, ans);
    }
    cout<<final;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    solve();
    return 0;
}
