#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define vb vector<bool>
#define Umap unordered_map
#define pb push_back
#define mp(a, b) make_pair(a, b)
#define F first
#define S second
#define endl "\n"
#define sl(x) (ll)x.length()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast_io;
    ll t,n,i,x,y,j,res=INT_MAX,x0,a,b,f=0;
    t=1;
    while(t--)
    {
        cin>>n>>x0;
        map<ll, ll> M;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            x=min(a,b);
            y=max(a,b);
            for(j=x;j<=y;j++)   
                M[j]++;
        }
        for(auto it:M)
        {
            if(it.S==n)
            {
                res=min(res, abs(it.F-x0)); f=1;
            }
        }
        if(f) 
            cout<<res;
        else 
            cout<<"-1";
    }
}
