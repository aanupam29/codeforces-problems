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
    tc
    lli a,b,c,ans;
    w(t)
    {
        ans = 0;
        cin>>a>>b>>c;
        if(a+c<=b)
        {
            cout<<"0";
            nl;
            continue;
        }
        if(b>=a)
        {
            c -= b-a+1;            
            a += b-a+1;
        }
        ans = a+c-b;
        cout<<min(c+1,ans/2+ans%2);
        nl;
    }
	return 0;
}
