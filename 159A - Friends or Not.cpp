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
	ll t = 1;
    while (t--) 
    {
        ll n, d;
        cin >> n >> d;
        tuple<string, string, ll> p[n];
        for (int i = 0; i < n; ++i) 
        {
            string first;
            string second;
            ll time;
            cin >> first;
            cin >> second;
            cin >> time;
            p[i] = make_tuple(first, second, time);
        }
        set<pair<string, string>> s;
        for (int k = 0; k < n - 1; ++k)
        {
            for (int i = k + 1; i < n; ++i) 
            {
                if (get<0>(p[k]) == get<1>(p[i]) && get<1>(p[k]) == get<0>(p[i])) 
                {
                    if ((get<2>(p[i]) - get<2>(p[k]) <= d) && (get<2>(p[i]) - get<2>(p[k]) > 0)) 
                    {
                        string first = min(get<0>(p[i]), get<1>(p[i]));
                        string second = max(get<0>(p[i]), get<1>(p[i]));
                        s.insert({first, second});
                    }
                }
            }
        }
        cout << s.size() << '\n';
        if (s.size())
        {
            for (auto friends:s) 
            {
                cout << friends.first << " " << friends.second << '\n';
            }
        }
    }
}
