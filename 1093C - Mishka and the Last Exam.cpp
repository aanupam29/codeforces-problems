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
    ulli b[n/2];
    ff(i,0,n/2-1)
    {
        cin>>b[i];
    }
    ulli a[n],sum;
    ff(i,0,n/2-1)
    {
        sum = b[i];
        if(i == 0)
        {
            a[i] = 0;
            a[n-1-i] = sum;
        }
        else
        {
            if(sum - a[i-1] <= a[n-i])
            {
                a[i] = a[i-1];
                a[n-i-1] = sum - a[i-1]; 
            }
            else
            {
                a[n-i-1] = a[n-i];
                a[i] = sum - a[n-i-1];
            }
        }
    }
    ff(i,0,n-1)
    {
        cout<<a[i]<<" ";
    }
	return 0;
}
