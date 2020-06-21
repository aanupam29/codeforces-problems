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

string s;
int main()
{
    int n, p;
    cin>>n>>p;
    p--;
    cin>>s;
    if (p >= n / 2)
    {
        p = n - 1 - p;
    }
    int l = 0, r = n / 2 - 1;
    while (l < n / 2 && s[l] == s[n - 1 - l])
    {
        l++;
    }
    while (r >= 0 && s[r] == s[n - 1 - r])
    {
        r--;
    }
    int ans = 0;
    int ch = 0;
    for (int i = l; i <= r; i++) 
    {
        int diff = abs(s[i] - s[n - 1 - i]);
        ch += min(diff, 'z' - 'a' + 1 - diff);
    }
    if (l < r)
    {
        ans += min(abs(p - l), abs(p - r)) + abs(r - l) + ch;
    }
    else if (ch > 0)
    {
        ans += abs(p-l) + ch;
    }
    cout<<ans;
    return 0;
}
