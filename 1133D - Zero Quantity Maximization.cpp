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

typedef  long long LL;
const int inf = 1<<30;
const LL maxn = 2*1e5+10;
typedef pair<int, int> P; 
int n, a[maxn], b[maxn];
map<P, int> ma;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        cin >> b[i];

    int cnt0 = 0; 
    for(int i = 1; i <= n; i++){
        if(a[i]==0 && b[i]==0)
            cnt0++;
        else if(a[i]==0)
            continue;
        else{
            int g = __gcd(a[i], b[i]);
            P cur = P(b[i]/g, a[i]/g);
            ma[cur]++;
        }
    }

    int ans = 0;
    for(map<P, int>::iterator it = ma.begin(); it != ma.end(); it++)
        ans = max(it->second, ans);
    cout << ans+cnt0 << endl;

	return 0;
}
