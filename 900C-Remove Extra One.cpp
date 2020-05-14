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

int n, a [ 100010 ], cnt [ 100010 ];
int main ()
{
    int max1 = 0 , max2 = 0 ;
    ci(n);
    for(int i=1;i<= n;i++)
    {
        ci(a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
            cnt[a[i]]--;
        }
        else
        {
            if (a[i] > max2)
            {
                cnt[max1]++;
                max2 = a[i];
            }
        }
    }
    int ans,max3 = -100000;
    for(int i=1;i<=n;i++)
    {
        if(cnt[i] > max3)
        {
            max3 = cnt[i];
            ans = i;
        }
    }
    co(ans);
} 
