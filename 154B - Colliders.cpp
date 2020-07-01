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

vector<long> getFactors(long x, vector<bool> qprime)
{
    vector<long> ans;
    for(long p = 2; p * p <= x; p++)
    {
        if(x % p != 0)
        {
            continue;
        }
        if(qprime[p])
        {
            ans.push_back(p);
        }
        if(qprime[x / p])
        {
            ans.push_back(x / p);
        }
    }
    if(ans.empty())
    {
        ans.push_back(x);
    }
    return ans;
}
int main()
{
    long n, m; scanf("%ld %ld\n", &n, &m);
    vector<bool> isPrime(n + 1, 1);
    isPrime[0] = 0; isPrime[1] = 0;
    for(long p = 2; p * p <= n; p++)
    {
        if(!isPrime[p])
        {
            continue;
        }
        for(long q = 2 * p; q <= n; q += p)
        {
            isPrime[q] = 0;
        }
    }
    vector<long> active(n + 1, 0);
    set<long> on;
    while(m--)
    {
        char action; long collider;
        scanf("%c %ld\n", &action, &collider);
        vector<long> factors = getFactors(collider, isPrime);
        if(action == '+')
        {
            if(on.count(collider) > 0)
            {
                puts("Already on");
            }
            else
            {
                long conflicted = 0;
                for(long p = 0; p < factors.size(); p++)
                {
                    if(active[factors[p]] > 0)
                    {
                        conflicted = active[factors[p]];
                        break;
                    }
                }
                if(conflicted)
                {
                    printf("Conflict with %ld\n", conflicted);
                }
                else
                {
                    puts("Success");
                    on.insert(collider);
                    for(long p = 0; p < factors.size(); p++)
                    {
                        active[factors[p]] = collider;
                    }
                }
            }
        }
        else if(action == '-')
        {
            if(on.count(collider) > 0)
            {
                puts("Success");
                on.erase(collider);
                for(long p = 0; p < factors.size(); p++)
                {
                    active[factors[p]] = 0;
                }
            }
            else
            {
                puts("Already off");
            }
        }
    }
    return 0;
}
