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
    ll n, m, num;
    string str;
    cin >> num >> str;
    ll ans = 0;
    for (char ch = 'z'; ch >= 'a' ; ch--) 
    {
        for (ll i = 0; i < str.length(); ++i) 
        {
            if(str.length() == 1) 
                break;
            if(str[i] != ch) 
                continue;
            if(i == 0 && str[i + 1] == ch - 1) 
            {
                str.erase(str.begin() + i);
                ans++;
                i--;
            }
            else if(i == str.length() - 1 && str[i - 1] == ch - 1) 
            {
                str.erase(str.begin() + i);
                ans++;
                i--;
            }
            else if(str[i + 1] == ch - 1 || str[i - 1] == ch - 1) 
            {
                str.erase(str.begin() + i);
                ans++;
                i--;
            }
        }
    }
    cout<<ans;
    return 0;
}
