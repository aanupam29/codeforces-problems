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
    ff(i,0,n-1)
    {
        ff(j,0,n-1)
        {
            ff(k,0,n-1)
            {
                if(k!=j)
                {
                    if(a[i] == a[j]+a[k])
                    {
                        cout<<i+1<<" "<<j+1<<" "<<k+1;
                        return 0;
                    }
                }
            }
        }
    }
    minus;
	return 0;
}
