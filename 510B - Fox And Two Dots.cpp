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

int n, m;
string board[51];
bool visited[51][51];
bool findCycle = false;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
void dfs(int x , int y , int fromX , int fromY , char needColor)
{
    if(x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if(board[x][y] != needColor)
    {
        return;
    }
    if(visited[x][y])
    {
        findCycle = true;
        return;
    }
    visited[x][y] = true;
    for(int f =0 ; f < 4 ; f++)
    {
        int nextX = x + dx[f];
        int nextY = y + dy[f];
        if(nextX == fromX && nextY == fromY) 
        {
            continue;
        }
        dfs(nextX , nextY , x , y , needColor);
    }
}
int solve()
{
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> board[i];
    }
    memset(visited , false , sizeof(visited));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(!visited[i][j])
            {
                dfs(i , j , -1 , -1 , board[i][j]);
            }
        }
    }
    cout << (findCycle?"Yes":"No");
    return 0;
}
int main()
{
    return solve();
}
