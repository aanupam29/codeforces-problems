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
#define cy             cout<<"Possible\n"
#define cn             cout<<"Impossible\n"
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
    fast;
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            cin>>a[i][j];
        }
    }
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            cin>>b[i][j];
            if(b[i][j] < a[i][j])
            {
                swap(a[i][j],b[i][j]);
            }
        }
    }
    ff(i,0,n-1)
    {
        ff(j,0,m-2)
        {
            if(a[i][j] >= a[i][j + 1] || b[i][j] >= b[i][j + 1])
            {
                cn;;
                ret;
            }
        }
    }
    ff(i,0,n-2)
    {
        ff(j,0,m-1)
        {
            if(a[i][j] >= a[i + 1][j] || b[i][j] >= b[i + 1][j])
            {
                cn;;
                ret;
            }
        }
    }
    cy;
    return 0;
}
