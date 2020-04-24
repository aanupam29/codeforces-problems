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

int main() 
{
    fast
    int n;
    cin>>n;
    int a,b[4]={0};
    ff(i,1,n)
    {
        cin>>a;
        b[a]++;
    }
    int ans = 0;
    ans = max(b[1],max(b[2],b[3]));
    cout<<n-ans;
	return 0;
}
