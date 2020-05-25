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

map<string,vector<string>> adj;
map<string,bool> vis;
int dfs(string s)
{
    if(vis[s])
    {
        return 0;
    }
    int dist=0;
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++)
    {
        dist=max(dfs(adj[s][i]),dist);
    }
    return dist+1;
}
int main()
{
    int i,j,k;
    int n,m;
    string s1,s2,r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1>>r>>s2;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        adj[s2].push_back(s1);
        adj[s1].push_back(s2);
    }
    cout<<dfs("polycarp");
    return 0;
}
