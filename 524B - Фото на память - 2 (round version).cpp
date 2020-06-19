#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   


int main()
{
    int n;
    cin >> n;
    vector<int> w(n), h(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> w[i] >> h[i];
    }
    int W, H, mA = 1000000001, A;
    for(int H = 1; H <= 1000; ++H) 
    {
        W = 0;
        for(int i = 0; i < n; ++i)
        {
            if(h[i] >= w[i])
            {
                if(h[i] <= H) 
                {
                    W += w[i];
                } 
                else if(w[i] <= H) 
                {
                    W += h[i];
                }
                else
                {
                    W = -1;
                    break;
                }
            } 
            else 
            {
                if(w[i] <= H)
                {
                    W += h[i];
                } 
                else if(h[i] <= H) 
                {
                    W += w[i];
                } 
                else
                {
                    W = -1;
                    break;
                }
            }
        }
        if(W >= 0)
        {
            A = W*H;
            mA = min(mA, A);
        }
    }
    cout << mA << '\n';
}
