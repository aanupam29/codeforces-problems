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
    int n;
    cin>>n;
    int a[n];
    ff(i,0,n-1)
    {
        cin>>a[i];
    }
    int ans = abs(a[n-1] - a[0]);
    int i1,i2;
    i1 = n-1;
    i2 = 0;
    for(int i=0;i<=n-2;i++)
    {
        if(ans > abs(a[i] - a[i+1]))
        {
            ans = abs(a[i] - a[i+1]);
            i1 = i;
            i2 = i+1;
        }
    }
    cout<<i1+1<<" "<<i2+1;
	return 0;
}
