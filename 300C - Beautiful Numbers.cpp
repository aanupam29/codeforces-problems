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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define MOD 1000000007

int mod_pow(long long a, int b)
{
    long long ret = 1;
    while(b)
    {
        if(b & 1) ret = ret * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return ret;
}
int main()
{
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    long long C = 1;
    int ans = 0;
    for(int i = 0;i <= n;++i)
    {
        int sum = i * a + (n - i)* b;
        bool ok = true;
        while(sum)
        {
            int d = sum % 10;
            sum /= 10;
            if(d != a && d != b)
            {
                ok = false;
            }
        }
        if(ok) 
        {
            ans = (ans + C) % MOD;
        }
        C = C * (n - i) % MOD;
        C = C * mod_pow(i + 1,MOD - 2) % MOD;
    }
    printf("%d\n",ans);
    return 0;
}
