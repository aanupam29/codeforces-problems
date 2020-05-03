#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i];

int main() 
{
    fast
    int n;
    cin>>n;
    int a[n+1];
    ff(i,1,n)
    {
        cin>>a[i];
    }
    int l = -1,r = -1;
    ff(i,1,n)
    {
        if(a[i] != i)
        {
            if(l == -1)
            {
                l = i;
            }
        }
    }
    if(l == -1)
    {
        cout<<"0 0";
        return 0;
    }
    r = a[l];
    int size = r - l + 1;
    for(int i = 0; i < size/2 ; i++)
    {
        swap(a[l+i] , a[r-i]);
    }
    ff(i,1,n)
    {
        if(a[i] != i)
        {
            cout<<"0 0";
            return 0;
        }
    }
    cout<<l<<" "<<r;
    return 0;
}
