#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int ar[n];
    loop(i,n)cin>>ar[i];
    int d=0,ans=0;
    loop(i,n)
    {
        if(ar[(i+1)%n]<ar[i])
            d++;
        else if(d>0 && ar[(i+1)%n]>=ar[i])
            ans++;
    }
    if(d>=2)
        cout<<-1;
    else
        cout<<ans;
}
