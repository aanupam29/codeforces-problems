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

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; ++i) 
    {
        for(int j=0; j<m; ++j) 
        {
            cin>>a[i][j];
        }
    }
    int dp1[n][m], dp2[n][m], dp3[n][m], dp4[n][m];
    for(int i=0; i<n; ++i) 
    {
        for(int j=0; j<m; ++j) 
        {
            if(!i && !j)
                dp1[i][j] = a[i][j];
            else if(!i)
                dp1[i][j] = dp1[i][j - 1] + a[i][j];
            else if(!j)
                dp1[i][j] = dp1[i - 1][j] + a[i][j];
            else 
                dp1[i][j] = max(dp1[i - 1][j], dp1[i][j - 1]) + a[i][j];
        }
    }
    for(int i=n-1; i>=0; --i) 
    {
        for(int j=m-1; j>=0; --j)
        {
            if(i == n-1 && j == m-1)
                dp2[i][j] = a[i][j];
            else if(i == n-1)
                dp2[i][j] = dp2[i][j + 1] + a[i][j];
            else if(j == m-1) 
                dp2[i][j] = dp2[i + 1][j] + a[i][j];
            else 
                dp2[i][j] = max(dp2[i + 1][j], dp2[i][j + 1]) + a[i][j];
        }
    }
    for(int i=n-1; i>=0; --i) 
    {
        for(int j=0; j<m; ++j) 
        {
            if(i == n - 1 && !j)
                dp3[i][j] = a[i][j];
            else if(i == n - 1)
                dp3[i][j] = dp3[i][j - 1] + a[i][j];
            else if(!j)
                dp3[i][j] = dp3[i + 1][j] + a[i][j];
            else 
                dp3[i][j] = max(dp3[i + 1][j], dp3[i][j - 1]) + a[i][j];
        }
    }
    for(int i=0; i<n; ++i) 
    {
        for(int j=m-1; j>=0; --j)
        {
            if(!i && j == m-1)
                dp4[i][j] = a[i][j];
            else if(!i)
                dp4[i][j] = dp4[i][j + 1] + a[i][j];
            else if(j == m-1)
                dp4[i][j] = dp4[i - 1][j] + a[i][j];
            else
                dp4[i][j] = max(dp4[i - 1][j], dp4[i][j + 1]) + a[i][j];
        }
    }
    int ma = 0;
    for(int i=1; i<n-1; ++i)
    {
        for (int j=1; j<m-1; ++j)
        {
            ma = max(ma, max(dp1[i - 1][j] + dp2[i + 1][j] + dp3[i][j - 1] + dp4[i][j + 1],
                     dp1[i][j - 1] + dp2[i][j + 1] + dp3[i + 1][j] + dp4[i - 1][j]));
        }
    }
    cout<<ma;
    return 0;
}
