#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    ll n,m,k,i,cnt;
    cin>>n>>m;
    ll a[1001],b[1001];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }
    cnt = 0;
    while(1)
    {
        for(i=0; i<n; i++)
        {
            if(b[i]>=a[i])
            {
                b[i] -= a[i];
            }
            else
            {
                m = m-(a[i]-b[i]);
                b[i]=0;
            }
        }
        if(m >= 0)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
    return 0;
}
