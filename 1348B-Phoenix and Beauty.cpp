#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

void solve(){
  int N,K;
  cin>>N>>K;
  set<int>s;
  for (int i=0;i<N;i++)
  {
    int a;
    cin>>a;
    s.insert(a);
  }
  if (s.size()>K)
  {
    cout<<"-1"<<endl;
    return;
  }
  cout<<N*K<<endl;
  for (int i=0;i<N;i++)
  {
    for (int b:s)
      cout<<b<<' ';
    for (int j=0;j<K-(int)s.size();j++)
      cout<<1<<' ';
  }
  nl;
}
int main(){
  int t; cin>>t;
  while (t--)
    solve();
}
