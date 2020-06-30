#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    long n(0);
    cin>>n;
    long upperBound = sqrt(2 * n);
    long *funky = new long[upperBound + 1];
    for(long k = 0; k <= upperBound; k++)
    {
        funky[k] = k * (k + 1) / 2;
    }
    bool found(0); 
    int lowerIndex(1), upperIndex(upperBound);
    while(lowerIndex <= upperIndex)
    {
        if(funky[lowerIndex] + funky[upperIndex] == n)
        {
            found = 1; 
            break;
        }
        else if(funky[lowerIndex] + funky[upperIndex] < n)
        {
            ++lowerIndex;
        }
        else if(funky[lowerIndex] + funky[upperIndex] > n)
        {
            --upperIndex;
        }
    }
    if(found)
    {
        cy;
    }
    else
    {
        cn;
    }
    return 0;
}
