#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

vector<string> adj;
ll n;
ll trans[400][400];
void dfs(ll s,ll d)
{
    trans[s][d]=true;
    ff(i,0,n)
    {
        if(adj[d][i]=='1' and not trans[s][i])
            dfs(s,i);
    }
}
int main()
{
    cin>>n;
    ll a[n];
    input(a,n);
    ff(i,0,n)
    {
        string s;cin>>s;
        adj.push_back(s);
    }
    ff(i,0,n)
    {
        dfs(i,i);
    }
    ff(i,0,n)
    {
        ll mm=i;
        ff(j,i+1,n)
        {
            if(a[j]<a[i] and trans[i][j] and a[j]<a[mm])
            {
                mm=j;
            }
        }
        swap(a[i],a[mm]);
    }
    output(a,n);
}
