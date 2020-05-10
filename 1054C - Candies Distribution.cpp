#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;

int main() 
{
    fast
    long n; 
    scanf("%ld", &n);
    vector<long> l(n), r(n), a(n);
    for(long p = 0; p < n; p++)
    {
        scanf("%ld", &l[p]);
    }
    for(long p = 0; p < n; p++)
    {
        scanf("%ld", &r[p]);
    }
    for(long p = 0; p < n; p++)
    {
        a[p] = n - l[p] - r[p];
    }
    for(long p = 0; p < n; p++)
    {
        for(long q = 0; q < p; q++)
        {
            l[p] -= (a[q] > a[p]);
        }
    }
    for(long p = 0; p < n; p++)
    {
        for(long q = p + 1; q < n; q++)
        {
            r[p] -= (a[q] > a[p]);
        }
    }
    bool possible(true);
    for(long p = 0; p < n; p++)
    {
        if(l[p] != 0 || r[p] != 0)
        {
            possible = false; 
            break;
        }
    }
    if(possible)
    {
        co("YES");
        nl;
        for(long p = 0; p < n; p++)
        {
            printf("%ld ", a[p]);
        }
        puts("");
    }
    else
    {
        co("NO");
    }
	return 0;
}
