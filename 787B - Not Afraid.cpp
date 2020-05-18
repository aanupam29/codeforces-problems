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
    fast
    int n,m;
    cin>>n>>m;
    int k;
    set<int> s[m+1];
    int x;
    ff(i,1,m)
    {
        cin>>k;
        w(k)
        {
            cin>>x;
            s[i].insert(x);
        }
    }
    int flag;
    ff(i,1,m)
    {
        flag = 0;
        for(auto j : s[i])
        {
            j = -j;
            if(s[i].find(j) != s[i].end())
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
        {
            cy;
            ret;
        }
    }
    cn;
	return 0;
}
