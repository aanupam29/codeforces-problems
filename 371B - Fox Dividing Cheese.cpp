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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int counta[6]={0};
int countb[6]={0};
int a,b;
void prime_fact()
{
    while(a%2==0)
    {
        counta[2]++;
        a=a>>1;
    }
    while(a%3==0)
    { 
        counta[3]++;
        a=a/3;
    }
    while(a%5==0)
    { 
        counta[5]++;
        a=a/5;
    }

    while(b%2==0)
    {
        countb[2]++;
        b=b>>1;
    }
    while(b%3==0)
    {
        countb[3]++;
        b=b/3;
    }
    while(b%5==0)
    {
        countb[5]++;
        b=b/5;
    }
}
int main()

{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a>>b;
    prime_fact();
    if(a!=b)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int sum = abs(counta[2]-countb[2])+abs(counta[3]-countb[3])+abs(counta[5]-countb[5]);
        cout<<sum<<endl;
    }
}
