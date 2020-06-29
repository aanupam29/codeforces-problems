#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int arr[1000010];
int main()
{
    int i, j, k;
    int n, m;
    int a, b, c;
    cin >> a >> b >> c;
    m = a * b * c;
    memset(arr, 0, sizeof(arr));
    for(i = 1; i <= m; i++)
    {
        for(j = i; j <= m; j += i)
        {
            arr[j]++;
        }
    }
    ll ans = 0, mod = 1073741824;
    for(i = 1; i <= a; i++)
    {
        for(j = 1; j <= b; j++)
        {
            for(k = 1; k <= c; k++)
            {
                ans += arr[i * j * k];
                ans = ans % mod;
            }
        }
    }
    cout << ans;
    return 0;
}
