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

int main()
{
    int row, col,q,r1,c1,r2,c2;
    cin>>row>>col;
    string s[row+5];
    int vertical_dp[505][505], horizontal_dp[505][505];
    for(int i=0; i<row; i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<row;i++)
    {
        int cnt=0;
        for(int j=1;j<col;j++)
        {
            if(s[i][j] == s[i][j-1] && s[i][j]=='.')
                cnt++;
            horizontal_dp[i][j]=cnt;
        }
    }
    for(int i=0;i<col;i++)
    {    
        int cnt=0;
        for(int j=1; j<row; j++)
        {
            if(s[j][i]==s[j-1][i] && s[j][i]=='.')
                cnt++;
            vertical_dp[j][i]=cnt;
        }
    }
    cin>> q;
    while(q--)
    {
        int ans=0;
        cin>>r1>>c1>>r2>>c2;
        int row1=r1-1, row2=r2-1, col1=c1-1, col2=c2-1;
        for(int i=row1;i<=row2;i++)
        {
            ans+= horizontal_dp[i][col2]-horizontal_dp[i][col1];
        }
        for(int i=col1; i<=col2;i++)
        {
            ans+= vertical_dp[row2][i]- vertical_dp[row1][i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
