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
    if(n == 1)
    {
        cout<<"1";
        return 0;
    }
    lli x[n],h[n];
    ff(i,0,n-1)
    {
        cin>>x[i]>>h[i];
    }
    lli left,ans = 2;
    left = x[0];
    ff(i,1,n-2)
    {
        if(left < x[i]-h[i])
        {
            left = x[i];
            ans++;
        }
        else if(x[i]+h[i] < x[i+1])
        {
            left = x[i] + h[i];
            ans++;
        }
        else
        {
            left = x[i];
        }
    }
    cout<<ans;
	return 0;
}
