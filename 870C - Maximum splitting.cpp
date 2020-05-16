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

int main() 
{
    fast
    int maxn = 16;
    vector<int> ans(maxn, -1);
    ans[0] = 0;
    for (int i = 1; i < maxn; ++i) 
    {
        for (auto j: vector<int>{4, 6, 9}) 
        {
            if (i >= j && ans[i - j] != -1) 
            {
                ans[i] = max(ans[i], ans[i - j] + 1);
            }
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) 
    {
        int n;
        cin >> n;
        if (n < maxn) 
        {
            cout<<ans[n];
            nl;
        } 
        else 
        {
            int t = (n - maxn) / 4 + 1;
            cout<<t + ans[n - 4 * t];
            nl;
        }
    }
	return 0;
}
