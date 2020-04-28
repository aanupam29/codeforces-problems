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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1)
    {
        cn;
        return 0;
    }
    int count = 0,c1=0,c2=0;
    stack<char> c;
    ff(i,0,n-1)
    {
        if(s[i] == '(')
        {
            c.push('(');
            c1++;
        }
        else
        {
            c2++;
            if(!c.empty())
            {
                c.pop();
            }
            else
            {
                count++;
            }
        }
    }
    if(count > 1 || c1!=c2)
    {
        cn;
    }
    else
    {
        cy;
    }
	return 0;
}
