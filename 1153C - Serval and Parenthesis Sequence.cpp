#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    fast
    int i, j, k;
    int n, m;
    string s;
    ci(n);
    cin >> s;
    if(n % 2)
    {
        co(":(");
        return 0;
    }
    int a = n / 2, b = n / 2;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '(')
        {
            a--;
        }
        else if(s[i] == ')')
        {
            b--;
        }
    }
    int sum = 0;
    if(s[0] == '?')
    {
        a--, sum = 1, s[0] = '(';
    }
    else if(s[0] == '(')
    {
        sum = 1;
    }
    else
    {
        sum = -1;
    }
    for(i = 1; i < n; i++)
    {
        if(sum <= 0 && i < n - 1)
        {
            co(":(");
            return 0;
        }
        if(s[i] == '(')
        {
            sum++;
        }
        else if(s[i] == ')')
        {
            sum--;
        }
        else
        {
            if(a)
            {
                
                s[i] = '(', a--, sum++;
            }
            else
            {
                s[i] = ')', b--, sum--;
            }
        }
    }
    if(sum != 0)
        co(":(")
    else
        cout << s;
    return 0;
}
