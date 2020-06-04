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

int main()
{
    long n, d;
    scanf("%ld %ld", &n, &d);
    vector<long> a(n); 
    for(long p = 0; p < n; p++)
    {
        cin>>a[p];
    }
    vector<long> b(n); 
    for(long p = 0; p < n; p++)
    {
        cin>>b[p];
    }
    sort(b.rbegin(), b.rend());
    long score = a[d - 1] + b[0];
    long idx(0), ans(d);
    for(long p = d - 2; p >= 0; p--)
    {
        ++idx;
        while(idx < n && a[p] + b[idx] > score)
        {
            ++idx;
        }
        if(idx >= n || a[p] + b[idx] > score)
        {
            break;
        }
        ans = p + 1;
    }
    cout<<ans;
    return 0;
}
