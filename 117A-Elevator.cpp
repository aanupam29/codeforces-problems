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
    long n, m; 
    cin>>n>>m;
    w(n)
    {
        long s(0), f(0), t(0), output(0);
        cin>>s>>f>>t;
        if(s == f)
        {
            output = t;
        }
        else
        {
            long T = 2 * (m - 1);
            --s; --f;
            output = (t/T) * T;  
            if(s < f && (output + s) < t)
            {
                output += T;
            }
            else if(s > f && (output + T - s) < t)
            {
                output += T;
            }
            output += (s < f) ? f : (T - f);
        }
        co(output);
        nl;
    }
    return 0;
}
