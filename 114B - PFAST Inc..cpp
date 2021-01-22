#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0; i<n; ++i)
    {
        cin>>s[i];
    }
    map<string,set<string>>g;
    for(int i = 0; i < m; ++i)
    {
        string u, v;
        cin>>u>>v;
        g[u].insert(v);
        g[v].insert(u);
    }
    int ans = 0;
    vector<int> d;
    for(int mask=0; mask<(1<<n); ++mask)
    {
        vector<int> v;
        for(int i=0; i<n; ++i)
        {
            if(mask>>i & 1)
            {
                v.push_back(i);
            }
        }
        bool ok = true;
        for(int i=0; i<v.size(); ++i)
        {
            for(int j=0; j<v.size(); ++j)
            {
                if(g[s[v[i]]].count(s[v[j]]))
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok) 
        {
            if(ans < v.size())
            {
                ans = v.size();
                d.clear();
                d = v;
            }
        }
    }
    cout<<d.size()<<'\n';
    vector<string> vec;
    for(auto i : d) 
    {
        vec.push_back(s[i]);
    }
    sort(vec.begin(),vec.end());
    for(auto i : vec)
    {
        cout<<i<<'\n';
    }
}
 
int main()
{
    solve();
}
