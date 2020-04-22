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

int main() 
{
    fast
    int n,num;
    cin>>n;
    float ans;
    lli sum = 0;
    int c=1, f=0;
    w(n)
    {
        cin>>num;
        if(num == 0)
        {
            cout<<"0\n";
            continue;
        }
        if(num % 2 == 0)
        {
            cout<<num/2;
            //sum += num/2;
        }
        else
        {
            if(c == 1)
            {
                ans = (float)num/2;
                ans = floor(ans);
                if(ans == -0)
                {
                    ans = 0;
                }
                cout<<ans;
                f=1;
                c=0;
            }
            else
            {
                ans = (float)num/2;
                ans = ceil(ans);
                if(ans == -0)
                {
                    ans = 0;
                }
                cout<<ans;
                c=1;
                f=0;
            }
        }
        cout<<"\n";
    }
	return 0;
}
