#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

const int N=505;
int n,m,k;
int dir[4][2]={1,0,0,1,-1,0,0,-1};
int vis[N][N]={0};
string mp[N];
void dfs(int x,int y) 
{
    for(int i=0;i<4;i++)
    {
        int a=x+dir[i][0];
        int b=y+dir[i][1];
        if(0<=a && a<n && 0<=b && b<m && vis[a][b]==0 && mp[a][b]=='.')
        {
            vis[a][b]=1;
            dfs(a,b);
        }
    }
    if(k)
    {
        k--;
        mp[x][y]='X';
    }
}
int main()
{
    scanf("%d %d %d",&n,&m,&k);
    getchar();
    for(int i=0;i<n;i++)
    {
        cin>>mp[i];
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]==0 && mp[i][j]=='.')
            {
                vis[i][j]=1;
                dfs(i,j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<mp[i];
        nl;
    }    
    return 0;
} 
