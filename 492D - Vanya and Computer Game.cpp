#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
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

int n,x,y,i,t,cntx,cnty;
vector <int> rez;
int main()
{
    scanf("%d%d%d",&n,&x,&y);
    cntx = cnty = 0;
    while (cntx < x||cnty < y)
    {
        if ((long long)(cntx+1)*y > (long long)(cnty+1)*x)
        {
            cnty++;
            rez.push_back(2);
        }
        else
        {
            if ((long long)(cntx+1)*y < (long long)(cnty+1)*x)
            {
                cntx++;
                rez.push_back(1);
            }
            else
            {
                cntx++;
                cnty++;
                rez.push_back(3);
                rez.push_back(3);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cin>>t;
        t--;
        int tmp = rez[t%(x+y)];
        if (tmp == 1)
        {
            printf("Vanya\n");
        }
        else if (tmp == 2)
        {
            printf("Vova\n");
        }
        else
        {
            printf("Both\n");
        }
    }
    return 0;
}
