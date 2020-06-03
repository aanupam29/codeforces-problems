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

const int N = 200100;
set<pp> q;
int ans[N], n, a[N], m, k;
int main()
{
    fast;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        q.insert({a[i], i});
    }
    int cnt = 0;
    while(!q.empty())
    {
        ++cnt;
        int pos = q.begin()->second;
        ans[pos] = cnt;
        q.erase(q.begin());
        while(true)
        {
            auto it = q.lower_bound({a[pos]+1+k, 0});
            if (it == q.end())
            {
                break;
            }
            pos = it->second;
            q.erase(it);
            ans[pos] = cnt;
        }
    }
    cout<<cnt;
    nl;
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << ' ';
    }
}
