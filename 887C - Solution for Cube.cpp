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

bool solved(vector<int> color) 
{
    for (int i = 0; i < 24; i += 4) 
    {
        set<int> s;
        for (int j = 0; j < 4; j++) 
        {
        s.insert(color[i + j]);
        }
        if (s.size() != 1) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    vector<int> color(24);
    for (int i = 0; i < 24; i++) 
    {
        cin >> color[i];
    }
    vector<int> updated;
    vector<int> from(8), to(8);
    from = {1, 3, 5, 7, 9, 11, 22, 20};
    to = {5, 7, 9, 11, 22, 20, 1, 3};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if (solved(updated)) 
    {
        cy;
        return 0;
    }
    from = {1, 3, 5, 7, 9, 11, 22, 20};
    to = {22, 20, 1, 3, 5, 7, 9, 11};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if (solved(updated)) 
    {
        cy;
        return 0;
    }
    from = {12, 13, 4, 5, 16, 17, 20, 21};
    to = {4, 5, 16, 17, 20, 21, 12, 13};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if(solved(updated)) 
    {
        cy;
        return 0;
    }
    from = {12, 13, 4, 5, 16, 17, 20, 21};
    to = {20, 21, 12, 13, 4, 5, 16, 17};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if (solved(updated)) 
    {
        cy;
        return 0;
    }
    from = {2, 3, 16, 18, 9, 8, 15, 13};
    to = {15, 13, 2, 3, 16, 18, 9, 8};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if (solved(updated)) 
    {
        cy;
        return 0;
    }
    from = {2, 3, 16, 18, 9, 8, 15, 13};
    to = {16, 18, 9, 8, 15, 13, 2, 3};
    updated = color;
    for (int i = 0; i < 8; i++) 
    {
        updated[from[i]] = color[to[i]];
    }
    if (solved(updated)) 
    {
        cy;
        return 0;
    }
    cn;
    return 0;
}
