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

vector<long long> lucky;
void trY(long long number, int fours, int sevens) {
  if(number > 1e10)
    return;
  if(fours == sevens)
    lucky.push_back(number);
  trY(number * 10 + 7, fours, sevens + 1);
  trY(number * 10 + 4, fours + 1, sevens);
}
int main() 
{
  trY(4, 1, 0);
  trY(7, 0, 1);
  long long n;
  cin >> n;
  sort(lucky.begin(), lucky.end());
  cout << lucky[lower_bound(lucky.begin(), lucky.end(), n) - lucky.begin()] << endl;
  return 0;
}
