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

string s[2];
int n,k;
bool a[2][100005];
void dfs(int x,int y,int h)
{
    if(s[x][y]!='-' || y<h || a[x][y])
    {
        return;
    }
    if(y+k>=n)
    {
        cy;
        exit(0);
    }
    a[x][y]=true;
    dfs((x+1)%2,y+k,h+1);
    dfs(x,y+1,h+1);
    dfs(x,y-1,h+1);
}
int main()
{
    cin >> n >> k >> s[0] >> s[1];
    dfs(0,0,0);
    cn;
    return 0;
} 
