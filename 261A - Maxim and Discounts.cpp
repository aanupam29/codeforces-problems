#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define sz(v)          int((v).size())
#define MOD 1000000007

int main()
{
    long m; scanf("%ld", &m);
    long bestDiscount(100001), temp(0);
    for(long k = 0; k < m; k++)
    {
        scanf("%ld", &temp); 
        if(temp < bestDiscount)
        {
            bestDiscount = temp;
        }
    }
    long n; 
    scanf("%ld", &n);
    long *prices = new long[n];
    for(long k = 0; k < n; k++)
    {
        scanf("%ld", prices + k);
    }
    sort(prices, prices + n);
    long itemsPaid(0), totalPaid(0);
    while(n > 0
    ){
        totalPaid += prices[--n];
        ++itemsPaid;
        if(itemsPaid % bestDiscount == 0)
        {
            n -= 2;
        }
    }
    printf("%ld\n", totalPaid);
    return 0;
}
