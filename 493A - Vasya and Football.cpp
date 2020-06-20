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

int main()
{
    int n, t, m, v, f[105][2] = {0};
    char p, c, s[2][25];
    cin >> s[0] >> s[1] >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> p >> m >> c;
        v = p == 'a';
        if (f[m][v] < 2)
        {
            if (!f[m][v] and c == 'y')
            {
                f[m][v]++;
            }
            else
            {
                f[m][v] = 2;
                cout << s[v] << " " << m << " " << t << endl;
            }
        }
    }
    return 0;
}
