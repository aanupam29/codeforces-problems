#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
const int N = 1e7 + 7;
int prime[N];
int l[N], r[N];
void sieve()
{
    for (int i = 2; i < N; i++) 
    {
        if (!prime[i])
        {
            prime[i] = i;
            for (int j = i + i; j < N; j += i)
            {
                prime[j] = i;
            }
        }
    }
}
int main ()
{
    sieve();
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) 
    {
        cin >> b[i];
    }
    for (int x : a) 
    {
        while (x != 1)
        {
            l[prime[x]]++;
            x /= prime[x];
        }
    }
    vector <int> t;
    for (int x : b) {
        int ans = 1;
        while (x != 1) {
            if (l[prime[x]]) 
            {
                r[prime[x]]++;
                l[prime[x]]--;
            }
            else 
            {
                ans *= prime[x];
            }
            x /= prime[x];
        }
        t.push_back(ans);
    }
    vector <int> d;
    for (int x : a) 
    {
        int ans = 1;
        while (x != 1) 
        {
            if (r[prime[x]]) 
            {
                l[prime[x]]++;
                r[prime[x]]--;
            }
            else
            {
                ans *= prime[x];
            }
            x /= prime[x];
        }
        d.push_back(ans);
    }
    cout << n << ' ' << m;
    nl;
    for (int x : d) cout << x << ' ';
    nl;
    for (int x : t) cout << x << ' ';
    nl;
    return 0;
}
