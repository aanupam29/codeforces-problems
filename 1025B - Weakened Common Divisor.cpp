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
	fast;
	long n; 
	cin>>n;
    long a, b; 
    cin>>a>>b;
    set<long> s;
    long d(2);
    while(d * d <= a)
    {
        if(a % d == 0)
        {
            s.insert(d);
            while(a % d == 0)
            {
                a /= d;
            }
        }
        ++d;
    }
    if(a > 1)
    {
        s.insert(a);
    }
    d = 2;
    while(d * d <= b)
    {
        if(b % d == 0)
        {
            s.insert(d);
            while(b % d == 0)
            {
                b /= d;
            }
        }
        ++d;
    }
    if(b > 1)
    {
        s.insert(b);
    }
    for(long p = 1; p < n; p++)
    {
        cin>>a>>b;
        vector<long> v;
        for(set<long>::iterator it = s.begin(); it != s.end(); it++)
        {
            d = *it; 
            if((a % d) && (b % d))
            {
                v.push_back(d);
            }
        }
        for(long p = 0; p < v.size(); p++)
        {
            s.erase(v[p]);
        }
    }
    if(s.size())
    {
        cout<<(*s.begin());
    }
    else
    {
        minus;
    }
	return 0;
}
