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
    tc;
    lli n;
    int d;
    int flag;
    w(t)
    {
        flag = 0;
        cin>>n;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                d = n/i;
                for(int j=i+1;j*j<d;j++)
                {
                    if(d%j == 0)
                    {
                        cy;
                        cout<<i<<" "<<j<<" "<<d/j;
                        nl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag)
            {
                break;
            }
        }
        if(!flag)
        {
            cn;
        }
    }
	return 0;
}
