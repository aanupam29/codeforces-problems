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
    int i,j,k;
    int n,m,sum;
    cin>>n;
    n=n*2;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m = INT_MAX;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=0;
            vector<int> v;
            for(k=0;k<n;k++)
            {
                if(k!=j && k!=i)
                {
                    v.push_back(a[k]);
                }
            }
            sort(v.begin(),v.end());
            for(k=0;k<v.size();k+=2)
            {
                sum += (v[k+1]-v[k]);
            }
            m=min(m,sum);
        }
    }
    cout<<m;
    return 0;
}
