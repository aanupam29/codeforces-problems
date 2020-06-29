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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        if(n%6==1||n%6==5||n%6==4||n%6==2)
        {
            cout<<"-1\n";
            continue;
        }
        int count=0;
        int flag=0;
        while(n>1)
        {
            if(n%6==1||n%6==5||n%6==4||n%6==2)
            {
                cout<<"-1\n";
                flag=1;
                break;
            }
            if(n%6)
            {
                n=n*2;
            }
            else
            {
                n=n/6;
            }
            count++;
        }
        if(!flag)
        {
            cout<<count<<endl;
        }
    }
}
