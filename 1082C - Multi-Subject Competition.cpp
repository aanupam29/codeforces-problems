#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
#define MAXN 100010
using namespace std;
int n,m,s,r,k,c,ans;
priority_queue<int> p[MAXN];
int a[MAXN];
int main()
{
    cin >> n >> m;
    FOR(i,0,n) cin >> s >> r, p[s].push(r);
    FOR(i,1,m+1)
    {
        k = c = 0;
        while(!p[i].empty())
        {
            c += p[i].top();
            if(c < 0) break;
            a[++k] += c;
            ans = max(ans,a[k]);
            p[i].pop();
        }
    }
    cout<<ans;
    return 0;
}
