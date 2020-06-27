#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define FOR(i,a,b)      for(int i=a;i<b;i++)
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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     FOR(i, 0, n)
#define sz(v)          int((v).size())
#define MOD 1000000007

int a[200100];
int val[200100];
int b[200100];
int main()
{
        int n,q;
        scanf("%d%d",&n,&q);
        FOR(i,0,n)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        FOR(i,0,q)
        {
                int l,r;
                scanf("%d%d",&l,&r);
                l--;
                r--;
                val[l]++;
                if (r<n-1)
                {
                    val[r+1]--;
                }
        }
        int v=0;
        FOR(i,0,n)
        {
                v+=val[i];
                b[i]=v;
        }
        sort(b,b+n);
        LL res=0;
        FOR(i,0,n)
        {
            res+=(b[i]*1ll*a[i]);
        }
        cout<<res<<endl;
    return 0;
}
