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
    int i, j, k;
    int n, m, ans = 0, r;
    cin>>n>>r;
    int a[n + 1], h[n + 1];
    for(i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    memset(h, 0, sizeof(h));
    for(i = 1; i <= n; i++)
    {
        if(h[i]) continue;
        ans++;
        k = -1;
        m = min(i + r - 1, n);
        for(j = i; j <= m; j++)
        {
            if(a[j])
                k = j;
        }
        if(k == -1)
        {
            m = max(1, i - r + 1);
            for(j = i; j >= m; j--)
            {
                if(a[j]){
                    k = j;
                    break;
                }
            }
        }
        if(k == -1)
        {
            co("-1"); 
            return 0;
        }
        a[k] = 0;
        m = min(r + k - 1, n);
        for(j = k; j <= m; j++)
            h[j] = 1;
        m = max(1, k - r + 1);
        for(j = k; j >= m; j--)
        {
            h[j] = 1;
        }
    }
    co(ans);
	return 0;
}
