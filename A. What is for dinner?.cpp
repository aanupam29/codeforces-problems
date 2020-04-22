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

int main() 
{
    fast
    int n,m,k;
    cin>>n>>m>>k;
    int r,c;
    map<int,int> mp;
    w(n)
    {
        cin>>r>>c;
        if(c == 0)
        {
            mp[r] = -1;
        }
        if(mp[r] == -1)
        {
            continue;
        }
        if(mp[r] == 0 && c != 0)
        {
            mp[r] = c;
        }
        else
        {
            mp[r] = min(mp[r] , c);
        }
    }
    int count = 0;
    for(int i=1;i<=m;i++)
    {
        if(k >= mp[i] && mp[i] != -1)
        {
            count += mp[i];
            k -= mp[i];
        }
        else if(k>0 && k <= mp[i])
        {
            count += k;
            break;
        }
    }
    cout<<count;
	return 0;
}
