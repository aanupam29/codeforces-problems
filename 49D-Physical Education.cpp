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

int main() 
{
    fast
    int n;
    cin>>n;
    int a[n],b[n];
    ff(i,0,n-1)
    {
        cin>>a[i];
    }
    int flag = 0;
    ff(i,0,n-1)
    {
        cin>>b[i];
        if(a[i] != b[i])
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        cout<<"0";
        return 0;
    }
    vector<pair<int,int>> v;
    int x;
    ff(i,0,n-2)
    {
        x = -1;
        ff(j,i,n-1)
        {
            x = j;
            if(a[i] == b[j])
            {
                break;
            }
        }
        while(x != i)
        {
            v.push_back({x-1,x});
            swap(b[x-1],b[x]);
            x--;
        }
    }
    cout<<v.size();
    nl;
    ff(i,0,v.size()-1)
    {
        cout<<v[i].first+1<<" "<<v[i].second+1;
        nl;
    }
	return 0;
}
