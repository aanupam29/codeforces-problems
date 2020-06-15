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

int main() 
{
	int n;
    cin >> n;
    vector<pair<pair<ll, ll>, ll> > vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i].first.first >> vec[i].first.second;
        vec[i].second = i + 1;
    } 
    sort(vec.begin(), vec.end());
    for(int i = 2; i < n; i++) 
    {
        ll a = (vec[i].first.first - vec[i - 1].first.first) * (vec[i - 1].first.second - vec[i - 2].first.second);
        ll b = (vec[i].first.second - vec[i - 1].first.second) * (vec[i - 1].first.first - vec[i - 2].first.first);
        if(a != b) 
        {
            cout << vec[i - 2].second << ' ' << vec[i - 1].second << ' ' << vec[i].second << '\n';
            break;
        }
    }
	return 0;
}
