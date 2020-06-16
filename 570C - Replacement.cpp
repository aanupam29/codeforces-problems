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

int main() 
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin>>s;
    ll res = 0;
    ff(i, 0, n)
    {
        if (s[i] == '.')
        {
            i++;
            while (i < n && s[i] == '.')
            {
                res++;
                i++;
            }
        }
    }
    ff(i, 0, m) 
    {
        ll pos;
        char c;
        cin >> pos >> c;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        pos --;
        if ((s[pos] == '.' && c == '.') || (s[pos] != '.' && c != '.'))
        {
            cout << res << endl;
            continue;
        }
        ll ndot = 0;
        if (pos == 0) 
        {
            ndot += s[pos + 1] == '.';
        }
        else if (pos == n - 1)
        {
            ndot += s[pos - 1] == '.';
        }
        else
        {
            ndot += s[pos + 1] == '.';
            ndot += s[pos - 1] == '.';
        }
        if (c == '.') 
        {
            res += ndot;
        } 
        else
        {
            res -= ndot;
        }
        cout << res << endl;
        s[pos] = c;
    }
    return 0;
}
