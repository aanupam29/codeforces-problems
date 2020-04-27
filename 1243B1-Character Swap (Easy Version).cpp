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
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>

int main() 
{
    fast
    int m;
    cin>>m;
    int n,i1,i2;
    string s,t;
    char a,b;
    int flag = 0;
    w(m)
    {
        cin>>n;
        cin>>s>>t;
        flag = 0;
        i1 = -1;
        i2 = -1;
        ff(i,0,n-1)
        {
            if(s[i] != t[i])
            {
                flag++;
                if(i1 == -1)
                {
                    i1 = i;
                }
                else
                {
                    i2 = i;
                }
                if(flag > 2)
                {
                    break;
                }
            }
        }
        if(flag != 2)
        {
            cn;
            continue;
        }
        if(s[i1]==s[i2] && t[i2]==t[i1])
        {
            cy;
            continue;
        }
        cn;
    }
	return 0;
}
