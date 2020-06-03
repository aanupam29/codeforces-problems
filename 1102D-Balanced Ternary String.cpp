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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0,z=0;
    ff(i,0,n-1)
    {
        if(s[i] == '0')
        {
            x++;
        }
        else if(s[i] == '1')
        {
            y++;
        }
        else
        {
            z++;
        }
    }
    int m = n/3;
    if(x < m)
    {
        for(int i=0;i<n;i++)
        {
            if(x == m)
            {
                break;
            }
            if(s[i] == '1')
            {
                if(y > m)
                {
                    y--;
                    s[i] = '0';
                    x++;
                }
            }
            else if(s[i] == '2')
            {
                if(z > m)
                {
                    z--;
                    s[i] = '0';
                    x++;
                }
            }
        }
    }
    if(y < m)
    {
        int k = 1;
        for(int i=0;i<n;i++)
        {
            if(y == m)
            {
                break;
            }
            if(s[i] == '0')
            {
                if(k > m)
                {
                    y++;
                    s[i] = '1';
                    x--;
                }
                k++;
            }
            else if(s[i] == '2')
            {
                if(z > m)
                {
                    z--;
                    s[i] = '1';
                    y++;
                }
            }
        }
    }
    if(z < m)
    {
        for(int i=n-1;i>=0;i--)
        {
            if(z == m)
            {
                break;
            }
            if(s[i] == '0')
            {
                if(x > m)
                {
                    z++;
                    s[i] = '2';
                    x--;
                }
            }
            else if(s[i] == '1')
            {
                if(y > m)
                {
                    y--;
                    s[i] = '2';
                    z++;
                }
            }
        }
    }
    cout<<s;
    return 0;
}
