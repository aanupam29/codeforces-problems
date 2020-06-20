#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
    ll i,j,k;
    ll n,p,l;
    ll s1=0,s2=0;
    vector<ll> f;
    vector<ll> s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>p;
        if(i==n-1)
        {
            l = p;
        }
        if(p>0)
        {
            s1+=p;
            f.push_back(p);
        }
        else
        {
            s2+=(-1*p);
            s.push_back(p*-1);
        }
    }
    if(s1>s2)
    {
        cout<<"first"<<endl;
    }
    else if(s2>s1)
    {
        cout<<"second"<<endl;
    }
    else
    {
        if(s==f)
        {
            if(l>0)
            {
                cout<<"first";
            }
            else
            {
                cout<<"second";
            }
        }
        else
        {
            vector<ll>::iterator p=f.begin();
            vector<ll>::iterator q=s.begin();
            while(p!=f.end() || q!=s.end())
            {
                if(*p==*q)
                {
                    p++;
                    q++;
                }
                else
                {
                    if(*p>*q)
                    {
                        cout<<"first";
                    }
                    else
                    {
                        cout<<"second";
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
