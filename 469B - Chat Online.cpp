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
    int p, q, l, r, a, b, t[2010], c[2010], d[2010], ans=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<2010;++i)
    {
        t[i]=0;
    }
    for(int i=0;i<p;++i)
    {
        cin>>a>>b;
        for(int j=a;j<=b;++j)
        {
            t[j]=1;
        }
    }
    for(int i=0;i<q;++i)
    {
        cin>>c[i]>>d[i];
    }
    for(int i=l;i<=r;++i)
    {
        bool flag=true;
        for(int j=0;j<q&&flag;++j)
        {
            for(int k=c[j]+i;k<=d[j]+i;++k)
            {
                if(t[k])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(!flag)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
