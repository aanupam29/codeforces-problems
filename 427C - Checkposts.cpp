#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;
int N;
vector<vector<int>> adj(1e5 + 7), radj(1e5 + 7);
vector<int> vis(1e5 + 7);
stack<int> s;
vector<int> cost(1e5 + 7);
map<int, int> cntcost;
void dfsutil(int x, int &y)
{
    if(vis[x] == 1)
    {
        return;
    }
    y = min(y, cost[x]);
    cntcost[cost[x]]++;
    vis[x] = 1;
    for(auto it : radj[x])
    {
        if (vis[it] == 0)
        {
            dfsutil(it, y);
        }
    }
}
void fillstack(int x)
{
    if(vis[x] == 1)
    {
        return;
    }
    vis[x] = 1;
    for (auto it : adj[x])
    {
        if (vis[it] == 0)
            fillstack(it);
    }
    s.push(x);
}
void solve()
{
    int M;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>cost[i];
    }
    cin>>M;
    for (int i=0; i<M; i++)
    {
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        adj[x].push_back(y);
        radj[y].push_back(x);
    }
    for (int i=0; i<N; i++)
    {
        if(vis[i] == 0)
            fillstack(i);
    }
    vis.assign(vis.size(), 0);
    int mincost = 0, cnt = 1;
    while(!s.empty())
    {
        int x = s.top();
        s.pop();
        if(vis[x] == 0)
        {
            int y = INT_MAX;
            dfsutil(x, y);
            cnt *= cntcost[y];
            cntcost.clear();
            mincost += y;
        }
    }
    cout<<mincost<<" "<<cnt % MOD;
}
signed main()
{
    solve();
}
