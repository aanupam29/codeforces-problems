#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
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
#define sz(v)          int((v).size())
#define MOD 1000000007

map<string,int>mp;
const int day[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int n=0,y,m,d,j;
string str,v,x;
int main()
{
    cin>>str;
    for(int i=0;i+10<=str.length();i++)
    {
        x=str.substr(i,10);
        if(sscanf((x+"*1").c_str(),"%2d-%2d-%4d*%d",&d,&m,&y,&j)!=4)
        {
            continue;
        }
        if(y<2013||y>2015||m<1||m>12||d<1||d>day[m])
        {
            continue;
        }
        mp[x]++;
        if(n<mp[x])
        {
            n=mp[x];
            v=x;
        }
    }
    cout<<v;
    return 0;
}
