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
    int i,j,k;
    int n;
    lli a,b,x,m;
    lli l,r,m2;
    cin>>a>>b;
    cin>>n;
    m=min(a,b);
    m2=max(a,b);
    set<lli> s;
    for(i=1;i<=sqrt(m);i++)
    {
        if(m%i==0)
        {
            s.insert(m/i);
            s.insert(i);
        }
    }
    vector<lli> v;
    set<lli>::iterator p=s.begin();
    while(p!=s.end())
    {
        v.push_back(*p);
        p++;
    }
    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        x=-1;
        for(j=0;j<v.size();j++)
        {
            if(v[j]>r)
            {
                break;
            }
            if(v[j]>=l && v[j]<=r && m2%v[j]==0)
            {
                x=v[j];
            }
        }
        cout<<x;
        nl;
    }
    return 0;
}
