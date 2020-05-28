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
    fast;
    int n;
    cin>>n;
    map<ll,int> front,back;
    ll a[n],b[n];
    ff(i,0,n-1)
    {
        cin>>a[i]>>b[i];
        front[a[i]]++;
        if(a[i] != b[i])
            back[b[i]]++;
    }
    int ans = INT_MAX;
    int j,k;
    int cnt = (n+1)/2;
    ff(i,0,n-1)
    {
        j = front[a[i]];
        k = back[a[i]];
        if(j >= cnt)
        {
            cout<<"0";
            ret;
        }
        else
        {
            if(k >= cnt - j)
            {
                ans = min(ans , cnt-j);
            }
        }
    }
    if(ans==INT_MAX)
    {
        ff(i,0,n-1)
        {
            if(back[b[i]] >= cnt)
            {
                ans = cnt;
                break;
            }
        }
    }
    if(ans == INT_MAX)
    {
        minus;
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
