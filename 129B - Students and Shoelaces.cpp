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

int main () 
{
    int n,m;
    cin>>n>>m;
    vector<int> graph[n+1];
    for (int i = 0; i < m; i++) 
    {
        int x, y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    int ans = 0;
    while (1) 
    {
        int num = 0;
        vector <int> tmp;
        for (int i = 1; i <= n; i++) 
        {
            if (graph[i].size() == 1) 
            {
                num++;
                tmp.push_back(i);
            }
        }
        if (num > 0) 
        {
            ans++;
            for (int i = 0; i < num; i++) 
            {
                int neigh = graph[tmp[i]][0];
                graph[tmp[i]].clear();
                graph[neigh].erase(remove(graph[neigh].begin(), graph[neigh].end(),tmp[i]), graph[neigh].end());
            }
        }
        else 
        {
            break;
        }
    }
    co(ans);
}
