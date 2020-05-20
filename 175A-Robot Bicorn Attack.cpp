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
 #define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

string str;
string substring(int start, int end)
{
    string ret = "";
    for(int i = start; i < end; i ++)
    {
        ret += str[i];
    }
    return ret;
}
bool isValid(const string& s)
{
    if(s == "0") 
        return true;
    return !(s[0] == '0') && (atoi(s.c_str()) <= 1e6);
}
int main()
{
    cin >> str;
    int i = 0;
    long long mval = -1;
    for(int j = i + 1; j < str.size(); j ++)
    {
        for(int k = j + 1; k < str.size(); k ++)
        {
            string first = substring(0, j), second = substring(j, k), third = substring(k, str.size());
            if(isValid(first) && isValid(second) && isValid(third))
            {
                long long cur = atoi(first.c_str()) + atoi(second.c_str()) + atoi(third.c_str());
                mval = max(mval, cur);
            }
        }
    }
    cout << mval;
} 
