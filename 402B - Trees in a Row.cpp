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

int main() 
{
    int i, j, k;
    int n, m;
    int sum, x;
    cin>>n>>k;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt;
    m = 10001;
    for (i = 1; i <= 1000; i++)
    {
        sum = i;
        cnt = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j] != sum)
            {
                cnt++;
            }
            sum += k;
        }
        if (cnt < m)
        {
            m = cnt;
            x = i;
        }
    }
    cout<<m;
    nl;
    for (i = 0; i < n; i++)
    {
        if (x > a[i])
        {
            cout << "+ " << i + 1 << " " << x - a[i] << endl;
        }
        else if (a[i] > x)
        {
            cout << "- " << i + 1 << " " << a[i] - x << endl;
        }
        x += k;
    }
    return 0;
}
