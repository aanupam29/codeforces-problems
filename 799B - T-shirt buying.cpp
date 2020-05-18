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

class cmp
{
public:
    bool operator()(pp a, pp b){
        return a.first>b.first;
    }
};
priority_queue<pp,vector<pp>,cmp> pq[4];
int main()
{
    int i,j,k;
    int n,m;
    int x,y;
    cin>>n;
    int p[n], f[n], b[n];
    bool taken[n+1];
    memset(taken,0,sizeof(taken));
    for(i=0;i<n;i++) 
        ci(p[i]);
    for(i=0;i<n;i++) 
        ci(f[i]);
    for(i=0;i<n;i++) 
        ci(b[i]);
    for(i=0;i<n;i++)
    {
        pq[f[i]].push({p[i],i+1});
        pq[b[i]].push({p[i],i+1});
    }
    ci(m);
    while(m--)
    {
        ci(k);
        x = -1;
        while(!pq[k].empty())
        {
            pp u = pq[k].top(); 
            pq[k].pop();
            if(taken[u.second])
                continue;
            taken[u.second] = 1;
            x = u.first;
            break;
        }
        cout<<x<<" ";
    }
    return 0;
}
