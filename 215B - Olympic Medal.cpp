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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int r1 = 0, a, n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        cin >> a;
        if(a > r1)
        {
            r1 = a;
        }
    }
    int m, k;
    cin >> m;
    int *p1 = new int[m];
    for(int i = 0; i < m; i++)
    {
        cin >> p1[i];
    }
    cin >> k;
    int *p2 = new int[k];
    for(int i = 0; i < k; i++)
    {
        cin >> p2[i];
    }
    int b;
    cin >> a >> b;
    double max = 0;
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < k; j++)
        {
            double ans = (b * p1[i] * 1.0) / ((a * p2[j]) + (b * p1[i]));
            if(ans > max) 
            {
                max = ans;
            }
        }
    }
    max = sqrt(max);
    cout << fixed << setprecision(12) << (double)(max * r1) << endl;
    delete [] p1;
    delete [] p2;
}
