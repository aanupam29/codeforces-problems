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

bool a[50][50];
int main() 
{
    tc
    w(t) 
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }
        bool ans = true;
        for (int i = n - 2; i >= 0; --i) 
        {
            for (int j = n - 2; j >= 0; --j) 
            {
                if (a[i][j] && !a[i + 1][j] && !a[i][j + 1]) 
                {
                    ans = false;
                }
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }
}
