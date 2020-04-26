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

int main()
{
    fast
    int i, j, k;
    int n, m, t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >> s;
        vector<int> odd, even;
        n = s.length();
        for(i = 0; i < n; i++)
        {
            k = s[i] - '0';
            if(k % 2)
            {
                odd.pb(k);
            }
            else
            {
                even.pb(k);
            }
        }
        i = 0, j = 0;
        while(i < even.size() || j < odd.size())
        {
            if(i < even.size() && j < odd.size())
            {
                if(even[i] <= odd[j])
                {
                    cout<<even[i++];
                }
                else
                {
                    cout<<odd[j++];
                }
            }
            else if(i < even.size())
            {
                cout<<even[i++];
            }
            else
            {
                cout<<odd[j++];
            }
        }
        nl;
    }
    return 0;
}
