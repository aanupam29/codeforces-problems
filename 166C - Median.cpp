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

int main()
{
    int n, x;
    cin >> n >> x;
    int now;
    int e_c{}, g_c{}, l_c{};
    for(int i{1}; i <= n; ++i)
    {
        cin >> now;
        if(now < x)
        {
            ++l_c;
        } 
        else if(now > x)
        {
            ++g_c;
        } 
        else
        {
            ++e_c;
        }
    }
    int answer{0};
    if(e_c == 0)
    {
        answer = 1;
        e_c = 1;
    }
    if(l_c < g_c)
    {
        answer += max(0, g_c - l_c - (e_c - 1) - 1);
        cout << answer << endl;
    } 
    else if(l_c > g_c)
    {
        answer += max(0, l_c - g_c - (e_c - 1));
        cout << answer;
    }
    else 
    {
        cout << answer;
    }
    return 0;
}
