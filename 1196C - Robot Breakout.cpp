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

const int MAXC = 1e5;
int main() 
{
    int q;
    cin >> q;
    while (q--) 
    {
        int n;
        cin >> n;
        int mnx = -MAXC, mxx = MAXC;
        int mny = -MAXC, mxy = MAXC;
        while (n--) 
        {
            int x, y, f1, f2, f3, f4;
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;
            if (!f1) 
                mnx = max(mnx, x);
            if (!f2) 
                mxy = min(mxy, y);
            if (!f3) 
                mxx = min(mxx, x);
            if (!f4) 
                mny = max(mny, y);
        }
        if (mnx <= mxx && mny <= mxy)
            cout << "1 " << mnx << " " << mny << "\n";
        else
            cout << "0\n";
    }
    return 0;
}
