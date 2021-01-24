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
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    string str;
    cin>>str;
    int len = str.size();
    int num[len];
    num[0] = str[0] == '[' ? 1:0;
    for(int i=1;i<len;++i) 
    {
        num[i] = num[i-1] + (str[i]=='[');
    }
    int left = 0, right = 0, best = 0;
    stack<int> index;
    for(int i=0;i<len;++i)
    {
        if(!index.empty() && ((str[i] == ']' && str[index.top()]=='[') || (str[i] == ')' && str[index.top()]=='(')))
        {
            index.pop();
            if(index.empty()) 
            {
                if(num[i] > best)
                    best = num[i], left=0,right=i+1;
            }
            else
            {
                if(num[i]-num[index.top()]>=best)
                {
                    best=num[i]-num[index.top()];
                    left = index.top()+1;
                    right = i+1;
                }
            }
        }
        else
            index.push(i);
    }
    cout<<best;
    nl;
    for(int i=left;i<right;++i)
    {
        cout<<str[i];
    }
    return 0;
}
