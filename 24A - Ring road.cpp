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
    fast
    int n;
    int a, b, c;
    int total_cost=0;
    int cost=0;
    int from[101] = {0};
    int to[101] = {0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        total_cost += c;
        if(from[a] || to[b])
        {
            from[b] = 1;
            to[a] = 1;
            cost += c;
        }
        else
        {
            from[a] = 1;
            to[b] = 1;
        }
    }
    if(total_cost - cost >= cost)
    {
        cout<<cost;
    }
    else
    {
        cout<<total_cost - cost;
    }
    return 0;
}
