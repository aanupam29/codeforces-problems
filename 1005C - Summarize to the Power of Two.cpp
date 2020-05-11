#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int n,m;
    cin>>n;
    int a[n];
    map<int,int> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i]; 
        mp[a[i]]++;
    }
    bool f;
    int ans=0;
    for(i=0;i<n;i++)
    {
        f=false;
        for(j=0;j<32;j++)
        {
            int x = (1<<j)-a[i];
            if(x==a[i] && mp[x]>1)
            {
                f = true;
            }
            else if(x!=a[i] && mp[x]>=1)
            {
                f=true;
            }
        }
        if(!f)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
