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

int person[1000001][2],an[1001];
bool used[1001];
int main()
{
    int n;
    cin>>n;
    n*=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            int x;
            cin>>x;
            person[x][0]=i;
            person[x][1]=j;
        }
    }
    used[0]=1;
    for(int i=1000000;i>0;i--)
    {
        if(!used[person[i][0]] && !used[person[i][1]])
        {
            used[person[i][0]]=1;
            used[person[i][1]]=1;
            an[person[i][0]]=person[i][1];
            an[person[i][1]]=person[i][0];
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<an[i]<<" ";
    }
    return 0;
}
