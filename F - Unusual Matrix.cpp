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
#define vi             vector<ll>
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
#define rv(v)          reverse(v.begin(),v.end())

int main()
{
    fast;
    int t;
    cin>>t;
    w(t)
    {
        int n;
        cin>>n;
        string s;
        int a[n][n], b[n][n];
        ff(i,0,n)
        {
            cin>>s;
            ff(j,0,n)
            {
                a[i][j] = s[j]-'0';
            }
        }
        ff(i,0,n)
        {
            cin>>s;
            ff(j,0,n)
            {
                b[i][j] = s[j]-'0';
            }
        }
        ff(i,0,n)
        {
            if(a[i][0] != b[i][0])
            {
                ff(j,0,n)
                {
                    a[i][j] ^= 1;    
                }
            }
        }
        ff(i,1,n)
        {
            if(a[0][i] != b[0][i])
            {
                ff(j,0,n)
                {
                    a[j][i] ^= 1;
                }
            }
        }
        int f = 0;
        ff(i,0,n)
        {
            ff(j,0,n)
            {
                if(a[i][j] != b[i][j])
                {
                    f = 1;  
                    break;
                }
            }
        }
        f == 1 ? cn : cy;
    }
    return 0;
}
