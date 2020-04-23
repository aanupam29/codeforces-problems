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

int main() 
{
    fast
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sa(a,4);
    int p,q,r,s;
    p = a[0];
    q = a[1];
    r = a[2];
    s = a[3];
    if(p+q>r&&r+q>p&&r+p>q || p+q>s&&s+q>p&&s+p>q || s+q>r&&r+q>s&&r+s>q || p+s>r&&r+s>p&&r+p>s)
    {
        cout<<"TRIANGLE";
        return 0;
    }
    if(p+q==r || p+q==s || p+r==s || q+r==s)
    {
        cout<<"SEGMENT";
        return 0;
    }
    cout<<"IMPOSSIBLE";
	return 0;
}
