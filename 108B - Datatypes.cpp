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
    long n; 
    ci(n);
    vector<long> bits(n, 0);
    for(int i = 0; i < n; i++)
    {
        cin>>bits[i];
    }
    sort(bits.begin(), bits.end());
    string output = "NO";
    for(int i = 1; i < n; i++)
    {
        if(bits[i - 1] != bits[i] && 2 * bits[i - 1] > bits[i])
        {
            output = "YES"; 
            break;
        }
    }
    cout << output;
    nl;
    return 0;
}
