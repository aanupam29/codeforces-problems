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
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int n,t;
vector<int> ans[1007];
int res[1007];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    auto f=[&](int u)
    {
        for (int i=2;i<=u;++i)
        {
            if (u%i==0) 
                return i;
        }
    };
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=1;i<=1000;++i) 
            ans[i].clear();
        for (int i=1;i<=n;++i)
        {
           int u;
           cin>>u; 
           ans[f(u)].push_back(i);
        }
        int ret=0;
        for (int i=1;i<=1000;++i)
        {
            if (ans[i].size())
            {
                ++ret;
                for (auto c:ans[i])
                {
                    res[c]=ret;
                }
            }
        }
        cout<<ret<<"\n";
        for (int i=1;i<=n;++i)
        {
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
