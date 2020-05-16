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
    int n,m;
    cin>>n>>m;
    string s[n];
    int count = 0;
    ff(i,0,n-1)
    {
        cin>>s[i];
    }
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            if(s[i][j] == 'B')
            {
                count++;
            }
        }
    }
    if(count == 0)
    {
        cout<<"1";
        ret;
    }
    if(count == 1)
    {
        cout<<"0";
        ret;
    }
    int max1 = -1,max2 = -1,min1 = 100000,min2 = 100000;
    ff(i,0,n-1)
    {
        ff(j,0,m-1)
        {
            if(s[i][j] == 'B')
            {
                min1 = min(j,min1);
                max1 = max(j,max1);
                min2 = min(i,min2);
                max2 = max(i,max2);
            }
        }
    }
    int ans = max(max1-min1+1,max2-min2+1);
    if(ans > n || ans > m)
    {
        cout<<"-1";
        ret;
    }
    cout<<ans*ans-count;
	return 0;
}
