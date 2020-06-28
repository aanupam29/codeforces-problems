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

int t,n,cnt,son,nex[1005];
char s[1005];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        n=strlen(s),cnt=0,son=n;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==':')
            {
                cnt++;
                nex[i]=son;
                son=i;
            }
        }
        for(int i=son;i<4;i++)
        {
            printf("0");
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]==':')
            {
                if(s[i+1]==':')
                {
                    while(++cnt<=8)
                    {
                        printf(":0000");
                    }
                }
                else
                {
                    printf(":");
                    for(int j=nex[i]-i;j<=4;j++)
                    {
                        printf("0");
                    }
                }
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        nl;
    }
    return 0;
}
