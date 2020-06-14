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

int cnt[500010];
vi a[200005];
int main()
{
    for(int i=1;i<=500005;i++)
    {
        int tp = 0, x = i;
        while(1)
        {
            if(!(x%5))
            {
                tp++;
            }
            else
            {
                break;
            }
            x/=5;
        }
        cnt[i] = tp + cnt[i-1];
        a[cnt[i]].pb(i);
    }
    int n;
    cin>>n;
    int ans = a[n].size();
    cout<<ans<<endl;;
    if(ans)
    {
        for(int i=0;i<ans;i++)
        {
            cout<<a[n][i]<<' ';
        }
    }
	return 0;
}
