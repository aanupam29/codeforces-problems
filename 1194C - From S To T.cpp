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
    fast;
    int q;
    int sarr[26],tarr[26],parr[26];
    cin>>q;
    while(q--)
    {
        string s,t,p;
        cin>>s>>t>>p;
        int n;
        n = s.size();
        memset(sarr,0,sizeof sarr);
        memset(tarr,0,sizeof tarr);
        memset(parr,0,sizeof parr);
        for(int i=0;i<n;i++)
        {
            sarr[s[i]-'a']++;
        }
        n=t.size();
        for(int i=0;i<n;i++)
        {
            tarr[t[i]-'a']++;
        }
        n=p.size();
        for(int i=0;i<n;i++)
        {
            parr[p[i]-'a']++;
        }
        bool ok = true;
        for(int i=0;i<26;i++)
        {
                if(sarr[i]+parr[i]<tarr[i])
                {
                    ok = false;
                    break;
                }
        }
        int ssize=s.size();
        int tsize=t.size();
        int i=0;
        int j=0;
        while(i<ssize && j<tsize)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if(i != ssize)
        {
            ok = false;
        }
        if(ok)
        {
            cy;
        }
        else
        {
            cn;
        }
    }
	return 0;
}
