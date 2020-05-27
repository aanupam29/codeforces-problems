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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> memo;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        memo[a[i]]++;
    }
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        if (memo[i] == 0) {
            q.push(i);
        }
    }
    int ans = q.size();
    vector<int> p(n);
    for (int i = 0; i < n; i++) 
    {
        if (memo[a[i]] == 0)  
        {
            p[i] = q.front(); q.pop();
        } 
        else if (memo[a[i]] == 1) 
        {
            p[i] = a[i];
        } 
        else 
        {
            if (a[i] > q.front()) 
            {
                p[i] = q.front(); q.pop();
                memo[a[i]]--;
            } 
            else 
            {
                p[i] = a[i];
                memo[a[i]] = 0;
            }
        }
    }
    cout << ans << endl;
    for (auto pi: p) 
    {
        cout << pi << " ";
    }
    return 0;
}
