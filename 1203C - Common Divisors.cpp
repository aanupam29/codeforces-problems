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

int main() 
{
    fast
    int n;
    cin>>n;
    lli a[n],cnt;
    cin>>a[0];
    cnt = a[0];
    ff(i,1,n-1)
    {
        cin>>a[i];
        cnt = __gcd(a[i],cnt);
    }
    lli ans = 0;
    for(lli i=1;i*i<=cnt;i++)
    {
        if (cnt%i == 0) 
        {
            if(i*i == cnt)
            {
                ans += 1;
            }
            else
            {
                ans += 2;
            }
        }
    }
    cout<<ans;
	return 0;
}
