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

int x[3], y[3];
bool is_between(int a, int b, int c)
{
    return min(a, b) <= c && c <= max(a, b);
}
bool f(int i, int j, int k) 
{
    return (x[k] == x[i] || x[k] == x[j]) && is_between(y[i], y[j], y[k]) || (y[k] == y[i] || y[k] == y[j]) && is_between(x[i], x[j], x[k]);
}
int main()
{
    for (int i = 0; i < 3; i++) 
    {
        cin >> x[i] >> y[i];
    }
    if (x[0] == x[1] && x[1] == x[2] || y[0] == y[1] && y[1] == y[2])
    {
        cout << "1\n";
    }
    else if (f(0, 1, 2) || f(0, 2, 1) || f(1, 2, 0))
    {
        cout << "2\n";
    }
    else
    {
        cout << "3\n";
    }
}
