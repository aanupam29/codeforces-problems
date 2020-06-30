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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int check(char a,char b) 
{
    if(a == b) 
        return 0;
    else if(a == 'R' && b == 'S') 
        return 1;
    else if(a == 'S' && b == 'P') 
        return 1;
    else if(a == 'P' && b == 'R') 
        return 1;
    else 
        return -1;
}
string a,b;
int h[1001000],g[1001000];
int main()
{
    int n;
    cin>>n>>a>>b;
    int l = l(a), r = l(b);
    int d = __gcd(l,r);
    int lcm = l * r / d;
    int  cnt = 0, tmp = 0;
    ll ans = 0 , sum = 0;
    for(int i = 1; i <= lcm; i++)
    {
        int now = check(a[cnt],b[tmp]);
        if(now == 1)
        {
            ans++;
        }
        else if(now == -1) 
        {
            sum++;
        }
        tmp++,cnt++;
        if(tmp == r) 
            tmp = 0;
        if(cnt == l) 
            cnt = 0;
        h[i] = ans;
        g[i] = sum;
    }
    sum *= (n/lcm);
    ans *= (n/lcm);
    sum += g[n%lcm];
    ans += h[n%lcm];
    cout<<sum<<" "<<ans;
    return 0;
}
