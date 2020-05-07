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
#define mod            998244353
#define co(n)          cout<<n;

int main() 
{
    fast
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long rf = 1;
    for (int i = 1; i < n; i++) 
    {
        if (s[i] == s[i - 1]) 
        {
            rf++;
        } 
        else 
        {
            break;
        }
    }
    long long rb = 1;
    for (int i = n - 1; i > 0; i--) 
    {
        if (s[i] == s[i - 1]) 
        {
            rb++;
        } 
        else 
        {
            break;
        }
    }
    long long ans = (rf + rb + 1) % mod;
    if (s[0] == s[n - 1]) 
    {
        ans = (ans + (rf * rb) % mod) % mod;
    }
    cout << ans << endl;
    return 0;
}
