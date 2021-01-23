# include <bits/stdc++.h>
using namespace std;
int f[1000001];
int main()
{
    int n,x;
    cin>>n;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        res^=x;
    }
    for(int i=1;i<=n;i++)
    {
        f[i] = f[i-1]^i;
    }
    for(int i=1;i<=n;i++)
    {
        if((n/i)%2 == 0) 
            res ^= f[n%i];
        else
            res ^= (f[n%i]^f[i-1]);
    }
    cout<<res;
}
