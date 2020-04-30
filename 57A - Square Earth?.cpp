#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i];
#define mod 1000000007

int main() 
{
    fast
    int n,x,y,a,b;
    cin>>n>>x>>y>>a>>b;
    if(x==n&&a==n || x==0&&a==0)
    {
        cout<<abs(y - b);
        return 0;
    }
    if(b==n&&y==n || y==0&&b==0)
    {
        cout<<abs(x - a);
        return 0;
    }
    int ans = 0;
    ans += min( n-y+n-b , y+b );
    ans += min( n-x+n-a , a+x );
    cout<<ans;
	return 0;
}
