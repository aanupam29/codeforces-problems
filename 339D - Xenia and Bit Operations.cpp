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

int num[20];
int tree[18][140000];

int main()
{
    num[0] = 1;
    for(int i=1; i<20; i++)
    {
        num[i] = num[i-1] * 2;
    }
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i=0; i<num[n]; i++)
    {
        scanf("%d", &tree[n][i]);
    }
    int state = n % 2;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<num[i]; j++)
        {
            if(i % 2 == state)
            {
                tree[i][j] = tree[i+1][j*2] ^ tree[i+1][j*2+1];
            }
            else
            {
                tree[i][j] = tree[i+1][j*2] | tree[i+1][j*2+1];
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        int p, b;
        scanf("%d%d", &p, &b);
        tree[n][p-1] = b;
        int now = p-1;
        for(int j=n-1; j>=0; j--)
        {
            now = now/2;
            if(j % 2 == state)
            {
                tree[j][now] = tree[j+1][now*2] ^ tree[j+1][now*2+1];
            }
            else
            {
                tree[j][now] = tree[j+1][now*2] | tree[j+1][now*2+1];
            }
        }
        printf("%d\n", tree[0][0]);
    }
    return 0;
}
