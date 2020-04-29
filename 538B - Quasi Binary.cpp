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
    vi ans;
    int x,p,m;
    while(n)
    {
        x = n;
        p = 1;
        m = 0;
        while(x)
        {
            if(x%10 != 0)
            {
                m += p;
            }
            x = x/10;
            p = p*10;
        }
        ans.pb(m);
        n = n - m;
    }
    cout<<ans.size();
    nl;
    ff(i,0,ans.size()-1)
    {
        cout<<ans[i]<<" ";
    }
	return 0;
}
