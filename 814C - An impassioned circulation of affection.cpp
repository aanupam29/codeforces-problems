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

#define siz 10555
const int maxs = 55;
int n,m;
char str[siz];
int Z[siz];
int ans[maxs][siz];
int solve(char s,int k)
{
    int cot = 0,ans=0;
    for(int i=0; i<n; i++)
    {
        if(str[i] ==s) cot++;
        Z[i+1] = i+1 - cot;
    }
    for(int i=1; i<=n; i++)
    {
        int key = Z[i] - k;
        int id = lower_bound(Z,Z+i+1,key) - Z;
        ans = max(ans,i - id);
    }
    return ans;
}
int main()
{
    int val;
    char s;
    memset(ans,-1,sizeof(ans));
    scanf("%d",&n);
    scanf("%s",str);
    scanf("%d",&m);
    for(int i=1; i<=m; i++)
    {
        scanf("%d %c",&val,&s);
        if(ans[s-'a'][val]==-1)
        {
            ans[s-'a'][val] = solve(s,val);
        }
        printf("%d\n",ans[s-'a'][val]);
    }
    return 0;
}
