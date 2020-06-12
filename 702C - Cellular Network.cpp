#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    ll city[n+5],tower[m+5];
    for(int i=0; i<n; i++)
    {
        cin>>city[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>tower[i];
    }
    ll dist,pos,r=0;
    for(int i=0; i<n; i++)
    {
        pos=lower_bound(tower,tower+m,city[i])-tower;
        if(pos == 0)
        {
            dist=abs(tower[pos]-city[i]);
        }
        else if(pos==m)
        {
            dist = abs(city[i]-tower[pos-1]);
        }
        else
        {
            ll right_dist = abs(tower[pos]-city[i]);
            ll left_dist = abs(city[i]-tower[pos-1]);
            dist = min(right_dist,left_dist);
        }
        r=max(r,dist);
    }
    cout<<r;
    return 0;
}
