                                /* BY ANUPAM */

#include "bits/stdc++.h"
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
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    int n;
    cin>>n;
    int ans = n;
    int a,b;
    ff(i,1,3)
    {
        cin>>b>>a;
        if(ans == a)
        {
            ans = b;
        }
        else if(ans == b)
        {
            ans = a;
        }
    }
    cout<<ans;
	return 0;
}
