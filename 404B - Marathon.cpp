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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

double m,k;
int n;
double  x,y;
int main()
{
    while(~scanf("%lf%lf%d",&m,&k,&n))
    {
        double len=m*4;
        for(int i=1;i<=n;++i)
        {
            double s=i*k;
            s = fmod(s,len);
            int p=1;
            while(s-m>0)
            {
                s -= m;
                p++;
            }
            if(p==1) 
            {
                x=s;
                y=0;
            }
            else if(p==2)
            {
                x=m;
                y=s;
            }
            else if(p==3)
            {
                x=m-s;
                y=m;
            }
            else if(p==4)
            {
                x=0;
                y=m-s;
            }
            printf("%.10f %.10f\n",x,y);
        }
    }
    return 0;
}
