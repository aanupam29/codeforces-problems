#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define l(s)           s.length()
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

LL getNumberOfCardsInFullHouse(LL floors)
{
    return 3 * floors * (floors + 1) / 2 - floors;
}
LL getMaxHeight(LL n) 
{
    LL l = 0;
    LL r = 10000000;
    while (l + 1 < r) 
    {
        LL m = (l + r) / 2;
        if (getNumberOfCardsInFullHouse(m) <= n) 
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return l;
}
LL solve(LL n)
{
    LL mx = getMaxHeight(n);
    while ((mx + n) % 3)    
    { 
        mx--;
    }
    return (mx + 3 - 1) / 3;
}
int main() 
{
    LL n;
    cin >> n;
    cout << solve(n); 
}
