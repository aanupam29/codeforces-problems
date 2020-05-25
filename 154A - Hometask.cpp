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
    fast
    string s;
    cin>>s;
    int k;
    cin>>k;
    char a,b;
    int l,r,ans = 0;
    ff(i,1,k)
    {
        cin>>a>>b;
        l = 0,r = 0;
        ff(j,0,l(s)-1)
        {
            if(s[j] == a)
            {
                l++;
            }
            else if(s[j] == b)
            {
                r++;
            }
            else
            {
                ans += min(l,r);
                l = 0,r = 0;
            }
        }
        ans += min(l,r);
    }
    cout<<ans;
	return 0;
}
