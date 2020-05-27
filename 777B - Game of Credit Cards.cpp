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

int mf(string s, string m) 
{
    int cnt = 0;
    for (auto num: s) 
    {
        auto lower = lower_bound(m.begin(), m.end(), num);
        if (lower != m.end()) 
        {
            m.erase(lower);
            cnt++;
        }
    }
    return s.size() - cnt;
}
int sf(string s, string m) 
{
    int cnt = 0;
    for (auto num: s) 
    {
        auto upper = upper_bound(m.begin(), m.end(), num);
        if (upper != m.end()) 
        {
            m.erase(upper);
            cnt++;
        }
    }
    return cnt;
}
int main() 
{
    int n;
    cin >> n;
    string s, m;
    cin >> s >> m;
    sort(s.begin(), s.end());
    sort(m.begin(), m.end());
    cout << mf(s, m) << endl;
    cout << sf(s, m) << endl;
    return 0;
}
