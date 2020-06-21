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

bool arr(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
bool automaton(string a, string b)
{
    int n = 0;
    for (int i = 0; i < a.length() and n < b.length(); i++) 
    {
        n += a[i] == b[n];
    }
    return n == b.length();
}
bool both(string a, string b)
{
    for (int i = 0; i < b.length(); i++)
    {
        int p = a.find(b[i]);
        if (p == -1) 
        {
            return false;
        }
        a[p] = '0';
    }
    return true;
}
int main()
{
    string a, b;
    cin >> a >> b;
    if (arr(a, b))
    {
        cout << "array" << endl;
    }
    else if (automaton(a, b)) 
    {
        cout << "automaton" << endl;
    }
    else if (both(a, b)) 
    {
        cout << "both" << endl;
    }
    else    
    {
        cout << "need tree" << endl;
    }
    return 0;
}
