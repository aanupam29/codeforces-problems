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
    char c[n];
    ff(i,0,n-1)
    {
        cin>>c[i];
    }
    if(n%2 == 0)
    {
        for(int i=0;i<=n-4;i+=2)
        {
            cout<<c[i]<<c[i+1]<<"-";
        }
        cout<<c[n-2]<<c[n-1];
    }
    else
    {
        if(n == 3)
        {
            cout<<c[0]<<c[1]<<c[2];
        }
        else if(n == 5)
        {
            cout<<c[0]<<c[1]<<"-"<<c[2]<<c[3]<<c[4];
        }
        else if(n == 7)
        {
            cout<<c[0]<<c[1]<<"-"<<c[2]<<c[3]<<c[4]<<"-"<<c[5]<<c[6];
        }
        else
        {
            cout<<c[0]<<c[1]<<"-"<<c[2]<<c[3]<<c[4]<<"-";
            for(int i=5;i<=n-4;i+=2)
            {
                cout<<c[i]<<c[i+1]<<"-";
            }
            cout<<c[n-2]<<c[n-1];
        }
    }
	return 0;
}
