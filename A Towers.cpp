                                               /* BY ANUPAM */

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

int main() 
{
    fast
    int n;
    cin>>n;
    int x,a[1001]={0};
    ff(i,0,n-1)
    {
        cin>>x;
        a[x]++;
    }
    x = 0;
    int ans = 0;
    fb(i,1000,0)
    {
        if(a[i] > 0)
        {
            ans = max(a[i],ans);
            x++;
        }
    }
    cout<<ans<<" "<<x;
	return 0;
}
