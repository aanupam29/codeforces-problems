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
#define mx 10000000

int main() 
{
    int n,d,k1,k2;
    cin>>n;
    queue<int>a;
    queue<int>b;
    cin>>k1;
    while(k1--)
    {
        cin>>d;
        a.push(d);
    }
    cin>>k2;
    while(k2--)
    {
        cin>>d;
        b.push(d);
    }
    int win;
    int count=0;
    while(true)
    {
        int frst=a.front();
        a.pop();
        int scnd=b.front();
        b.pop();
        count++;
        if(frst>scnd)
        {
            a.push(scnd);
            a.push(frst);
        }
        else
        {
            b.push(frst);
            b.push(scnd);
        }
        if(a.empty())
        {
            win=2;
            break;
        }
        if(b.empty())
        {
            win=1;
            break;
        }
        if(count>100000)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }
    cout<<count<<" "<<win<<endl;
}
