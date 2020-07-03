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
#define co(n)          cout<<n;
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main () 
{
    int n; 
    cin>>n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) 
    {
        int c1 = 0, c2 = 0;
        for (int j = i-1; j >= 0; j--) 
        {
            if (str[j] == 'R') 
            {
                c1++;
            }
            else if (str[j] == 'L')
            {
                break;
            }
        }
        for (int j = i+1; j < n; j++) 
        {
            if (str[j-1] == 'L') 
            {
                c2++;
            }
            else if (str[j-1] == 'R')
            {
                break;
            }
        }
        int ans = ( (c1 > c2)? c1 : c2 ) + 1; 
        printf("%d ",ans);
    }
}
