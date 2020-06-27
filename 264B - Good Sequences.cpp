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
    long n; 
    scanf("%ld", &n);
    vector<long> a(n + 1);
    long maxA(0);
    for(long p = 0; p < n; p++)
    {
        scanf("%ld", &a[p]);
        if(a[p] > maxA)
        {
            maxA = a[p];
        }
    }
    vector<long> greatestDivisor(maxA + 1, 0);
    vector<long> sequenceLength(maxA + 1, 0);
    for(long p = 2; p <= maxA; p++)
    {
        if(greatestDivisor[p] == 0)
        {
            for(long q = p; q <= maxA; q+= p)
            {
                greatestDivisor[q] = p;
            }
        }
    }
    long maxSoFar(1);
    for(long p = 0; p < n; p++)
    {
        long current = a[p];
        long count = 0;
        while(current > 1)
        {
            if(count <= sequenceLength[greatestDivisor[current]])
            {
                count = 1 + sequenceLength[greatestDivisor[current]];
            }
            current /= greatestDivisor[current];
        }
        if(count > maxSoFar)
        {
            maxSoFar = count;
        }
        current = a[p];
        while(current > 1)
        {
            if(sequenceLength[current] < count)
            {
                sequenceLength[greatestDivisor[current]] = count;
            }
            current /= greatestDivisor[current];
        }
    }
    printf("%ld\n", maxSoFar);
    return 0;
}
