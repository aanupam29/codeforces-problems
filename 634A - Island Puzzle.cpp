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
#define maxn 222222

int n,a[maxn],b[maxn];
int main()
{
    while(~scanf("%d",&n))
    {
        int p1,p2;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==1)
                p1=i;
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            if(b[i]==1)
                p2=i;
        }
        int gg=0;
        for(int i=p1,j=p2,k=0;k<n;i=(i+1)%n,j=(j+1)%n,k++)
        {
            if(a[i]==0)
                i=(i+1)%n;
            if(b[j]==0)
                j=(j+1)%n;
            if(a[i]!=b[j])
            {
                gg=1;
                break;
            }
        }
        printf("%s\n",gg?"NO":"YES");
    }
    return 0;
}
