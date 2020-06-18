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

struct data
{
    int cnt=0,l=1000000,r=-1;
};
int main()
{
    int i,j,k;
    int n,x;
    cin>>n;
    map<int,data> mp;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mp[x].cnt++;
        mp[x].l=min(i,mp[x].l);
        mp[x].r=max(i,mp[x].r);
    }
    data fs;
    int mx=0,ms=0;
    map<int,data>::iterator p = mp.begin();
    while(p != mp.end())
    {
        data d = p->second;
        if(d.cnt > mx)
        {
            mx = d.cnt;
            fs = d;
            ms = d.r-d.l;
        }
        else if(d.cnt == mx)
        {
            if(d.r-d.l < ms)
            {
                mx = d.cnt;
                ms = d.r-d.l;
                fs = d;
            }
        }
        p++;
    }
    cout<<(fs.l+1)<<" "<<(fs.r+1);
    return 0;
}
