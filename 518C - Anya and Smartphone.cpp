#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

long long ans;
int n,i,m,k,a[100010],wz[100010],x;
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]),wz[a[i]]=i;
    while(m--)
    {
        scanf("%d",&x);
            ans+=(wz[x]-1)/k+1;
        if(wz[x]>1) 
            wz[x]--,wz[a[wz[x]]]++,a[wz[x]+1]=a[wz[x]],a[wz[x]]=x;
    }
    printf("%I64d\n",ans);
}
