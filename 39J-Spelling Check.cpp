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
    string a,b;
    cin>>a>>b;
    int len1 = l(a);
    int len2 = l(b);
    vector<int> v;
    int flag = 0;
    char ans;
    int i,j = 0,m;
    for(i=0;i<len1;i++)
    {
        if(a[i] != b[j])
        {
            if(flag == 0)
            {
                ans = a[i];
                m = i;
                flag = 1;
                v.push_back(i+1);
            }
            else
            {
                cout<<"0";
                return 0;
            }
        }
        else
        {
            j++;
        }
    }
    for(int j=m+1;j<len1;j++)
    {
        if(a[j] == ans)
        {
            v.push_back(j+1);
        }
        else
        {
            break;
        }
    }
    for(int j=m-1;j>=0;j--)
    {
        if(a[j] == ans)
        {
            v.push_back(j+1);
        }
        else
        {
            break;
        }
    }
    sv(v);
    cout<<v.size();
    nl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
	return 0;
}
