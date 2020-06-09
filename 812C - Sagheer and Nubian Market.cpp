#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

const int N = 1e5 + 7;
int n, S;
int a[N];
ll b[N];
ll res(int k)
{
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] + (i + 1) * (ll) k;
    }
    sort(b, b + n);
    ll ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans += b[i];
    }
    return ans;
}
class Main
{
public:
    void solve(std::istream &in, std::ostream &out)
    {
        in >> n >> S;
        for (int i = 0; i < n; i++)
        {
            in >> a[i];
        }
        int l = 0, r = n + 1;
        while (l < r - 1)
        {
            int m = (l + r) / 2;
            if (res(m) <= S)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        out << l << ' ' << res(l) << '\n';
    }
};
int main()
{
    ios::sync_with_stdio(0);
    Main solver;
    std::istream &in(std::cin);
    std::ostream &out(std::cout);
    solver.solve(in, out);
    return 0;
}
