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

string o[4];
int main() 
{
    int maxlength = 0, minlength = 110, maxindex = 0, minindex = 0;
    int c[4];
    for (int i = 0; i < 4; i++) 
    {
        getline(cin, o[i]);
        c[i] = o[i].length() - 2;
    }
    sort(c, c + 4);
    bool hasMax = c[3] >= c[2] * 2;
    bool hasMin = c[0] <= c[1] / 2;
    if (hasMax == hasMin) 
    {
        cout << "C";
    } 
    else if (hasMin)
    {
        for (int i = 0; i < 4; i++)
        {
            if (c[0] + 2 == o[i].length())
            {
                cout << o[i].at(0);
            }
        }
    }
    else if (hasMax)
    {
        for (int i = 0; i < 4; i++)
        {
            if (c[3] + 2 == o[i].length()) 
            {
                cout << o[i].at(0);
            }
        }
    }
    return 0;
}
