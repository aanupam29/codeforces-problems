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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int chk=0;
int n,m;
string s[60];
int vis[60][60];
void dfs(int i,int j)
{
    vis[i][j]=1;
    chk++;
    if(i+1<n && s[i+1][j]=='#' && vis[i+1][j]==0)
    {
        dfs(i+1,j);
    }
    if(j+1<m && s[i][j+1]=='#' && vis[i][j+1]==0)
    {
        dfs(i,j+1);
    }
    if(i-1>=0 && s[i-1][j]=='#' && vis[i-1][j]==0)
    {
        dfs(i-1,j);
    }
    if(j-1>=0 && s[i][j-1]=='#' && vis[i][j-1]==0)
    {
        dfs(i,j-1);
    }
}
 
int main() 
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            vis[i][j]=0;
        }
    }
    int ans=2,cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                cnt++;
            }
        }
    }
    if(cnt<=2)
    {
        cout<<"-1";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='#')
            {
                for(int k=0;k<n;k++)
                {
                    for(int l=0;l<m;l++)
                    {                 
                        vis[k][l]=0;
                    }
                }
                chk=0;
                s[i][j]='.';
                if(i+1<n && s[i+1][j]=='#')
                {
                    dfs(i+1,j);
                }
                else if(j+1<m && s[i][j+1]=='#')
                {
                    dfs(i,j+1);
                }
                else if(i-1>=0 && s[i-1][j]=='#')
                {
                    dfs(i-1,j);
                }
                else if(j-1>=0 && s[i][j-1]=='#')
                {
                    dfs(i,j-1);
                }
                if(chk != cnt-1)
                {
                    ans=1;
                }
                s[i][j]='#';
            }
        }
    }
    cout<<ans<<endl;
	return 0;
}
