#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
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
#define mod            1000000007
#define co(n)          cout<<n;

int main() 
{
    fast
    long long n, x, y; 
    scanf("%lld %lld %lld", &n, &x, &y);
    bool possible = 1;
    vector<long long> numbers(n, 1);
    numbers[n - 1] = y - (n - 1);
    if(numbers[n - 1] <= 0)
    {
        possible = 0;
    }
    long long sumOfSquares = 0;
    for(int p = 0; p < n; p++)\
    {
        sumOfSquares += numbers[p] * numbers[p];
    }
    if(sumOfSquares < x)
    {
        possible = 0;
    }
    if(possible)
    {
        for(int p = 0; p < n; p++)
        {
            printf("%lld ", numbers[p]);
        } 
        puts("");
    }
    else
    {
        puts("-1");
    }
    return 0;
}
