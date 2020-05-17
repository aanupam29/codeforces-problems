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

int main() {
    int p, x, y;
    cin >> p >> x >> y;
    for(int s = y; ; s++) 
    {
        if (s % 50 != x % 50) 
        {
            continue;
        }
        bool me = false;
        int i = s / 50 % 475;
        for (int j = 0; j < 25; j++) 
        {
            i = (i * 96 + 42) % 475;
            if(i + 26 == p) 
            {
                me = true;
                break;
            }
        }
        if (me) 
        {
            printf("%d\n", (max(0, s - x) + 50) / 100);
            break;
        }
    }
    return 0;
}
