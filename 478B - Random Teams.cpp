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
#define cy             cout<<"Ashishgup\n"
#define cn             cout<<"FastestFinger\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

ll nC2(ll n)
{
	if(n < 2)
	{
		return 0;
	}
	return (n * (n - 1) / 2);
}
int main()
{   
    fast;
    ll n, m, minNoOfPairs, maxNoOfPairs;
    cin >> n >> m;
    minNoOfPairs = (m - n % m) * (nC2(n/m)) + (n % m) * (nC2(n/m + 1));
    maxNoOfPairs = nC2(n - m + 1);
    cout<<minNoOfPairs<<" "<<maxNoOfPairs;
    return 0;
}
