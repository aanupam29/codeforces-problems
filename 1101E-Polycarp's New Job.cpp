#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    fast
    int n;
    cin>>n;
    lli x,y,mx=0,my=0;
    char ch;
    w(n)
    {
        cin>>ch>>x>>y;
        if(x < y)
        {
            swap(x,y);
        }
        if(ch == '+')
        {
            mx = max(mx,x);
            my = max(my,y);
        }
        else
        {
            if(x>=mx && y>=my || y>=mx && x>=my)
            {
                cy;
            }
            else
            {
                cn;
        
            }
        }
    }
	return 0;
}
