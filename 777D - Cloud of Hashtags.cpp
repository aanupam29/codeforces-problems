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

const int N = 5e5+5;
int n;
char s[N];
string ss[N];
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf(" %s", s), ss[i] = s;
    }
    for (int i = n-2; i >= 0; --i)
    {
        int d = 0;
        for (; ; ++d)
        {
            if (ss[i][d] < ss[i+1][d])
            {
                d = -1; 
                break; 
            }
            if (ss[i][d] > ss[i+1][d])
            {
                break;
            }
            if (!ss[i][d]) 
            {
                break;
            }
        }
        if (~d) 
            ss[i].resize(d);
    }
    for (int i = 0; i < n; ++i)
        printf("%s\n", ss[i].c_str());
    return 0;
}
