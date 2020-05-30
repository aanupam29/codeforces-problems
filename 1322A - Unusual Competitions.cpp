#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define S second
#define F first
#define f(i,n) for(ll i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
#define CASES  ll t;cin>>t;while(t--)
typedef long long ll;
typedef unsigned long long ull;
int main()
{
    fast;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<ll>s1(n);
    ll x=0,y=0,ans=0;
    f(i,n)
    {
        if(s[i]=='(')
            x++;
        else
            y++;
    }
    if(s[0]=='(')
        s1[0]=1;
    else
        s1[0]=-1;
    if(x!=y)
        cout<<"-1"<<endl;
    else
    {
        for(ll i=1;i<n;i++)
        {
            if(s[i]=='(')
                s1[i]=s1[i-1]+1;
            else
                s1[i]=s1[i-1]-1;
        }
        f(i,n)
        {
            if(s1[i]<0)
                ans++;
            if(s1[i]==0 && s1[i-1]<0)
                ans++;
        }
        cout<<ans;
    }
    return 0;
}
