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

inline bool ends_with(std::string const & value, std::string const & ending)
{
    if (ending.size() > value.size()) return false;
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}
bool cmp(string a,string b)
{
    return a.length()<b.length();
}
int main()
{
    int i,j,k;
    int n,m,x;
    string s, t;
    map<string,vector<string> > mp;
    ci(n);
    for(i=0;i<n;i++)
    {
        cin>>s;
        ci(m);
        for(j=0;j<m;j++)
        {
            cin>>t;
            mp[s].push_back(t);
        }
    }
    vector<string> v;
    map<string,vector<string> >::iterator p=mp.begin();
    co(mp.size());
    nl;
    while(p!=mp.end())
    {
        v.clear();
        v=p->second;
        sort(v.begin(),v.end(),cmp);
        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                if(ends_with(v[j],v[i]))
                {
                    v[i]="#";
                    break;
                }
            }
        }
        s=p->first;x=0;
        cout<<s<<" ";
        for(i=0;i<v.size();i++)
        {
            if(v[i]!="#")
                x++;
        }
        cout<<x<<" ";
        for(i=0;i<v.size();i++)
        {
            if(v[i]!="#")
                cout<<v[i]<<" ";
        }
        p++;
        nl;
    }
    return 0;
}
