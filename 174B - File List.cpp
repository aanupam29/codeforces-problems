#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int l,n,pos,g,t;
string s;
vector<int>v;
void no()
{
    cn;
    exit(0);
}
int main(){
    cin>>s;
    n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            v.push_back(i);
        }
    }
    g = v.size();
    if(!g || v[0]>8 || v[0]==0 || v[g-1]==n-1 || v[g-1]<n-4)
    {
        no();
    }
    for(int i=1;i<g;i++)
    {
        l=v[i]-v[i-1]-1;
        if(l>11||l<2)
        {
            no();
        }
    }
    cy;
    for(int i=1;i<g;i++)
    {
        t = ceil((v[i]-v[i-1]-1)*3./11.) + v[i-1];
        cout<<s.substr(pos,t-pos+1);
        nl;
        pos = t+1;
    }
    cout<<s.substr(pos,n-pos);
}
