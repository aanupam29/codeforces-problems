#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>

int main() 
{
    fast
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int f = 0;
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            cin>>a[i][j];
            if(a[i][j]!=0)
            {
                f=1;
            }
        }
    }
    if(!f)
    {
        cout<<"0";
        return 0;
    }
    int b[n][m];
    memset(b, 0, sizeof(b));
    vector<pair<int,int>> ans;
    ff(i,0,n-2)
    {
        ff(j,0,m-2)
        {
            if(a[i][j]==1 && a[i][j+1]==1 && a[i+1][j]==1 && a[i+1][j+1]==1)
            {
                ans.pb({i,j});
                b[i][j] = 1;
                b[i][j+1] = 1;
                b[i+1][j] = 1;
                b[i+1][j+1] = 1;
            }
        }
    }
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            if(a[i][j] != b[i][j])
            {
                cout<<"-1";
                return 0;
            }
        }
    }
    cout<<ans.size();
    ff(i,0,ans.size()-1)
    {
        nl;
        cout<<ans[i].first+1<<" "<<ans[i].second+1;
    }
	return 0;
}
