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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

double a[200005], sum, x;
int d, n, k, op;
int main () 
{
    scanf("%d", &n);
    k = 1; a[1] = 0.0; sum = 0.0;
    w(n) 
    {
        scanf("%d", &op);
        if(op == 1) 
        {
            scanf("%d %lf", &d, &x);
            a[d] += x;
            sum += (d * x);
        }
        else if(op == 2)
        {
            scanf("%lf", &x);
            k++;
            a[k - 1] -= x;
            a[k] = x;
            sum += x;
        }
        else if(op == 3)
        {
            a[k - 1] += a[k];
            sum -= a[k];
            a[k] = 0;
            k--;
        }
        printf("%.10lf\n", sum / k);
    }
    return 0;
}
