#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 
int solve(string s,string v,int n)
{
    int r=0,b=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]!=v[i])
        {
            s[i]=='r'?++r:++b;
        }
    }
    return max(r,b);
}
int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string a,b,s,x="rb",y="br";
    cin>>n>>s;
    for(int i=0;i<n/2;++i)
    {
        a+=x,b+=y;
    }
    if(n&1)
    {
        a+='r',b+='b';
    }
    int ans=solve(s,a,n);
    ans=min(ans,solve(s,b,n));
    cout<<ans;
    return 0;
}
