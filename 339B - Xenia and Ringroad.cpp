#include<bits/stdc++.h>
using namespace std;
typedef long long lol;
#define fword ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t;cin>>t;while(t--)
const double em = 1e-7;
const int maxn = 10000000;
int main()
{
    int n,m;
    cin>>n>>m;
    lol arr[m+1];
    for(int i=1;i<=m;i++)
    {
        cin>>arr[i];
    }
    arr[0]=1;
    int i=1;
    lol c=0;
    for(int j=1;j<=m;j++)
    {
        if(arr[j]-arr[j-1]<0)
        {
            c+=n-arr[j-1]+arr[j];
        }
        else
        {
            c+=arr[j]-arr[j-1];
        }
    }
    cout<<c;
}
