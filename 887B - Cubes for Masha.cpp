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

int main() 
{
    fast
    int n;
    cin>>n;
    map<int,int> mp;
    int a[n][6];
    ff(i,0,n-1)
    {
        ff(j,0,5)
        {
            cin>>a[i][j];
            mp[a[i][j]] = 1;
        }
    }
    int x;
    ff(i,0,n-1)
    {
        ff(j,i+1,n-1)
        {
            ff(k,0,5)
            {
                ff(l,0,5)
                {
                    x = a[i][l]*10 + a[j][k];
                    mp[x] = 1;
                    x = a[j][l]*10 + a[i][k];
                    mp[x] = 1;
                }
            }
        }
    }
    ff(i,1,99)
    {
        if(mp[i] == 0)
        {
            cout<<i-1;
            ret;
        }
    }
	return 0;
}
