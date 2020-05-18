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

struct fountain 
{
    int b, p;
    char t;
};
bool comp (fountain a, fountain b)
{
    return a.b > b.b;
}
int main()
{
    int n, c, d;
    cin >> n >> c >> d;
    vector<fountain> v(n);
    for (auto && i: v)
    cin >> i.b >> i.p >> i.t;
    sort (v.begin(), v.end(), comp);
    int ans = 0;
    int cnt = 0;
    for (auto i: v)
    {
        if (i.t == 'D')
        {
            if (d >= i.p)
            {
                ans+=i.b;
                cnt++;
                d -= i.b;
            }
        }
        else
        {
            if(c >= i.p)
            {
                ans+=i.b;
                cnt++;
                c -= i.p;
            }
        }
        if(cnt == 2)
            break;
    }
    if(cnt != 2)
        cout << 0;
    else
        cout << ans;
    return 0;
}
