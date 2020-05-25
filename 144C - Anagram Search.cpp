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

    
int a[26] = {0};
int b[26] = {0};
int check(int count)
{
    int t = 0;
    ff(i,0,25)
    {
        if(a[i] > b[i])
        {
            t += a[i] - b[i];
        }
    }
    if(t <= count)
    {
        return 1;
    }
    return 0;
}
int main() 
{
    fast
    string s,p;
    cin>>s>>p;
    ff(i,0,l(p)-1)
    {
        a[p[i]-'a']++;
    }
    int ans = 0;
    int n1 = l(s);
    int n2 = l(p);
    if(n2 > n1)
    {
        cout<<"0";
        ret;
    }
    int count = 0;
    ff(i,0,n2-1)
    {
        if(s[i] == '?')
        {
            count++;
        }
        else
        {
            b[s[i]-'a']++;
        }
    }
    ans += check(count);
    int k = 0;
    ff(i,n2,n1-1)
    {
        if(s[k] == '?')
        {
            count --;
        }
        else
        {
            b[s[k]-'a']--;
        }
        if(s[i] == '?')
        {
            count++;
        }
        else
        {
            b[s[i]-'a']++;
        }
        ans += check(count);
        k++;
    }
    cout<<ans;
	return 0;
}
