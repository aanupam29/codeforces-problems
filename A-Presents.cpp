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
    int n,k,c;
    cin>>n>>k>>c;
    int a[n+1] = {0};
    if(k == 1)
    {
        cout<<n;
        return 0;
    }
    if(c != 0)
    {
        int x;
        int m = INT_MAX;
        w(c)
        {
            cin>>x;
            m = min(x , m);
            a[x] = 1;
        }
        if(m > k)
        {
            for(int i=m;i>=1;i-=k)
            {
                a[i] = 1;    
            }
        }
        x = 0;
        for(int i=m+1;i<=n;i++)
        {
            if(a[i] == 0)
            {
                x++;
                if(x == k)
                {
                    a[i] = 1;
                    x = 0;
                }
            }
            else
            {
                x = 0;
            }
        }
        x = 0;
        ff(i,1,n)
        {
            if(a[i] == 1)
            {
                x++;
            }
        }
        cout<<x;
    }
    else
    {
        cout<<n/k;
    }
	return 0;
}
