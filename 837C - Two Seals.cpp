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
    int i,j,k;
    int n,m,r;
    int a,b,c;
    int x,y;
    cin>>n>>a>>b;
    vector<pp> v;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<=a && y<=b)
        {
            v.push_back({x,y});
            continue;
        }
        else if(y<=a && x<=b)
        {
            v.push_back({x,y});
        }
    }
    if(v.size()==0)
    {
        cout<<"0";
        return 0;
    }
    m=0;
    for(i=0;i<v.size()-1;i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            k=(v[i].first*v[i].second) + (v[j].first*v[j].second);
            r=a;
            c=b-v[i].second;
            if(v[i].first<=a && v[i].second<=b && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);
            r=a-v[i].first;
            c=b;
            if(v[i].first<=a && v[i].second<=b && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);
            r=a;
            c=b-v[i].first;
            if(v[i].first<=b && v[i].second<=a && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);
            r=a-v[i].second;
            c=b;
            if(v[i].first<=b && v[i].second<=a && r>=0 && c>=0 && ((v[j].first<=r && v[j].second<=c) || (v[j].first<=c && v[j].second<=r)))
                m=max(m,k);
        }
    }
    cout<<m;
    return 0;
}
