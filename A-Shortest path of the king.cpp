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
#define pb push_back

int main() 
{
    fast
    char x;
    int xi,xf,yi,yf;
    cin>>x>>yi;
    xi = x-'a'+1;
    cin>>x>>yf;
    xf = x-'a'+1;
    vector<string> v;
    int count = 0;
    if(xi == xf && yi == yf)
    {
        cout<<"0";
        return 0;
    }
    while(xi != xf || yi != yf)
    {
        if(xi<xf && yi>yf)
        {
            count++;
            xi++;
            yi--;
            v.pb("RD");
        }
        else if(xi>xf && yi<yf)
        {
            count++;
            xi--;
            yi++;
            v.pb("LU");
        }
        else if(xi>xf && yi>yf)
        {
            count++;
            xi--;
            yi--;
            v.pb("LD");
        }
        else if(xi<xf && yi<yf)
        {
            count++;
            xi++;
            yi++;
            v.pb("RU");
        }
        else if(xi>xf && yi==yf)
        {
            count++;
            xi--;
            v.pb("L");
        }
        else if(xi<xf && yi==yf)
        {
            count++;
            xi++;
            v.pb("R");
        }
        else if(xi==xf && yi>yf)
        {
            yi--;
            count++;
            v.pb("D");
        }
        else
        {
            yi++;
            count++;
            v.pb("U");
        }
    }
    cout<<count;
    nl;
    ff(i,0,v.size()-1)
    {
        cout<<v[i];
        nl;
    }
	return 0;
}
