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
    int n;
    cin>>n;
    int a[n];
    ff(i,0,n-1)
    {
        cin>>a[i];
    }
    sa(a,n);
    set<int> s;
    if(a[0]!=1)
    {
        s.insert(a[0]-1);
    }
    else
    {
        s.insert(1);
    }
    ff(i,1,n-1)
    {
        if(a[i] == 1)
        {
            if(s.find(1) == s.end())
            {
                s.insert(1);
            }
            else
            {
                s.insert(2);
            }
            continue;
        }
        if(s.find(a[i]-1) == s.end())
        {
            s.insert(a[i]-1);
        }
        else if(s.find(a[i]) == s.end())
        {
            s.insert(a[i]);
        }
        else
        {
            s.insert(a[i]+1);
        }
    }
    cout<<s.size();
	return 0;
}
