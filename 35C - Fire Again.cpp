#include <bits/stdc++.h>
using namespace std;
#define qf q.front().first
#define qs q.front().second
int n,m,k;
pair <int ,int > last;
bool visited[2020][2020];
queue <pair <int , int > > q;
bool valid(int a,int b)
{
    return a&&b&&a<=n&&b<=m&&visited[a][b]==0;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m>>k;
    while (k--)
    {
        int a,b;
        cin>>a>>b;
        visited[a][b]=1;
        q.push({a,b});
    }
    while (q.size())
    {
        last.first = q.front().first;
        last.second = q.front().second;
        if (valid(qf,qs+1))
        {
            q.push({qf,qs+1});
            visited[qf][qs+1]=1;
        }
        if (valid(qf,qs-1))
        {
            q.push({qf,qs-1});
            visited[qf][qs-1]=1;
        }
        if (valid(qf+1,qs))
        {
            q.push({qf+1,qs});
            visited[qf+1][qs]=1;
        }
        if (valid(qf-1,qs))
        {
            q.push({qf-1,qs});
            visited[qf-1][qs]=1;
        }
        if (q.size())
            q.pop();
    }
    cout <<last.first<<" "<<last.second;
    return 0;
}
