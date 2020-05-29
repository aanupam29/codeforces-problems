#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector<int> e[N];
int vis[N], color[N], in[N], tot = 0;
int fmax(int a, int b, int c)
{
    return max(max(a, b), c);
}
void bfs(int u, int fa)
{

    int num = 1;
    for (auto v : e[u])
    {
        if (v == fa)
            continue;
        while (num == color[u] || num == color[fa])
            num++;
        color[v] = num++;
    }
    for (auto v : e[u])
    {
        if (v == fa)
            continue;
        bfs(v, u);
    }
}
int main()
{
    int n, u, v;
    scanf("%d", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        scanf("%d%d", &u, &v);
        in[u]++, in[v]++;
        tot = fmax(tot, in[u], in[v]);
        e[u].push_back(v);
        e[v].push_back(u);
    }
    color[1] = 1;
    bfs(1, 0);
    tot++;
    printf("%d\n", tot);
    for (int i = 1; i <= n; i++)
        printf("%d ", color[i]);
    puts("");
    return 0;
}
