#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define co(n)          cout<<n;
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int i,j,k;
    int n,m;
    m=4;
    cin>>n;
    string a[n], s, t;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(a[0][0]>'1')
        a[0][0]='1';
    else
    {
        for(i=1;i<m;i++)
        {
            if(a[0][i]>'0'){
                a[0][i]='0';
                break;
            }
        }
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=0;j<m;j++)
        {
            for(k=0;k<10;k++)
            {
                s=a[i];
                s[j]=k+'0';
                if(s>="1000" && s<="2011" && s>=a[i-1])
                {
                    if(t<a[i-1])
                        t=s;
                    else
                        t=min(s,t);
                }
            }
        }
        a[i]=t;
        if(a[i]<"1000" || a[i]>"2011")
        {
            cout<<"No solution\n";
            return 0;
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            cout<<"No solution\n";
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
