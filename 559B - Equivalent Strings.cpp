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

string a,b;
int equiv(string a, string b) 
{
    if (a == b){
        return 1;
    }
    if (a.length()%2) 
    {
        return 0;
    }
    int n = a.length();
    string a1 = a.substr(0, n/2), a2 = a.substr(n/2,n/2);
    string b1 = b.substr(0, n/2), b2 = b.substr(n/2,n/2);
    return (equiv(a1, b2) and equiv(a2, b1)) or (equiv(a1, b1) and equiv(a2, b2));
}
int main() 
{
    cin>>a>>b;
    printf("%s\n", equiv(a, b)?"YES":"NO");
    return 0;
}
