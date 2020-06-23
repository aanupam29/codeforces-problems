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

string mp[8];
int main()
{
    int T,i,j,flag;
    int x1,y1,x2,y2;
    scanf("%d",&T);
    while(T--)
    {
        flag=0;
        for(i=0; i<8; i++)
        {
            cin>>mp[i];
            for(j=0; j<8; j++)
            {
                if(mp[i][j]=='K')
                {
                    if(flag)
                    {
                        x1=i;
                        y1=j;
                    }
                    else
                    {
                        x2=i;
                        y2=j;
                        flag=1;
                    }
                }
            }
        }
        if((x1-x2)%4==0 && (y1-y2)%4==0)
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
