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

int main(void){

    ll k; 
    string input; 
    cin >> k >> input;
    ll n = input.size();
    vector<ll> posCount(n + 1,0);
    posCount[0] = 1;
    long long onesSoFar = 0,output = 0;
    for(long long p = 0; p < n; p++)
    {
        if(input[p] == '1')
        {
            ++onesSoFar;
        }
        if(onesSoFar >= k)
        {
            output += posCount[onesSoFar-k];
        }
        ++posCount[onesSoFar];
    }
    cout<<output;
    return 0;
}
