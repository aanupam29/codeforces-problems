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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
    fast;
    int i,j,v1,v2,n,d;
    cin>>v1>>v2>>n>>d;
    vector<int>vec(n);
    vec[0] = v1;
    vec[n-1] = v2;
    j=n-2;
    for(i=n-2;i>=1;--i,j--)
    {
        if((vec[i+1]+d) > (vec[0]+(d*j)))
        {
            vec[i] = vec[0]+(d*j);
        }
        else
        {
            vec[i] = vec[i+1]+d;
        }
    }
    cout<<accumulate(vec.begin(),vec.end(),0)<<endl;
}
