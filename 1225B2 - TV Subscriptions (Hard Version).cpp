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
    long t; scanf("%ld", &t);
    while(t--)
    {
        long n, k, d; 
        scanf("%ld %ld %ld", &n, &k, &d);
        std::vector<long> a(n); for(long p = 0; p < n; p++)
        {
            scanf("%ld", &a[p]);
        }
        std::map<long, long> s;
        for(long p = 0; p < d; p++)
        {
            s[a[p]] = p;
        }
        long mn(s.size());
        for(long p = d; p < n; p++)
        {
            long rem = a[p - d];
            long nxt = a[p];
            if(s[rem] == p - d){s.erase(rem);}
            s[nxt] = p;
            mn = (mn < s.size()) ? mn : s.size();
        }
        printf("%ld\n", mn);
    }
    return 0;
}
