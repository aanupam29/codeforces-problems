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

vector <int> v;
string t,p;
int m,n;
void rearrange()
{
    if(n>m)
    {
        swap(t,p);
        swap(n,m);
    }
}
void push_div()
{
    for(int i=1;2*i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        {
            v.push_back(i);
        }
    }
    if(m%n==0)
    {
        v.push_back(n);
    }
}
int is_div2(string s, int i,int l)
{
    if(i==m)
    {
        return 1;
    }
    return p.substr(i,l)==s ? is_div2(s,i+l,l) : 0;
}
int is_div(string s, int i,int l)
{
    if(i==n)
    {
        return is_div2(s,0,l);
    }
    return t.substr(i,l)==s ? is_div(s,i+l,l) : 0;
}
int main()
{
    int common=0;
    cin>>t>>p;
    n= t.length();
    m= p.length();
    rearrange();
    push_div();
    for(int i=0;i<v.size();i++)
    {
        int d = v[i];
        string s= t.substr(0,d);
        if(is_div(s,d,d))
        {
            common++;
        }
    }
    cout<<common<<endl;
}
