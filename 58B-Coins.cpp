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
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>
#define input for(int i=0;i<n;i++) cin>>a[i];

int main() 
{
    fast
    lli i,j,k;
    lli n,p,q;

    cin>>n;

   while(1)
   {
       p=n;
       for(i=2;i<=p;i++)
       {
           if(p%i==0)
           {
               cout<<p<<" ";
               p=p/i;
               break;
           }
       }

       if(p==n)
        break;

        n=p;
   }

   cout<<"1";

    return 0;
}
