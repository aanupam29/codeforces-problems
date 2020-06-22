#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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

int n, m, k, each;
int x, y;
int main() 
{
    cin >> n >> m >> k;
    each = (n * m) / k;
    x = y = 1;
    int covered = 0;
    for (int i = 0; i < k - 1; i++)
    {
        cout << each;
        for (int j = 0; j < each; j++) 
        {
            cout << " " << x << " " << y;
            if (x % 2 == 1) 
            {
                y++;
                if (y > m) 
                {
                x++;
                y = m; 
                }
            }
            else 
            {
                y--;
                if (y < 1)
                {
                    x++;
                    y = 1; 
                } 
            }
            covered++;
        }
        puts("");
    }
    cout << ((n * m) - covered);
    for (int i = covered; i < n * m; i++) {
        cout << " " << x << " " << y;
        if (x % 2 == 1) 
        {
            y++;
            if (y > m) 
            {
                x++;
                y = m; 
            }
        }
        else
        {
            y--;
            if (y < 1) 
            {
                x++;
                y = 1; 
            } 
        }
    }
    puts("");
    return 0;
}
