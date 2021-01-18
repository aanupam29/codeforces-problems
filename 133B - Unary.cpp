#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000003
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_map<char,string> c;
    c['>']="1000";
	c['<']="1001";
	c['+']="1010";
	c['-']="1011";
	c['.']="1100";
	c[',']="1101";
	c['[']="1110";
	c[']']="1111";
    ll p[505];
    p[0]=1;
    for(int i=1;i<=500;i++)
    {
        p[i] = (p[i-1]<<1LL)%mod;
    }
    string s;
    cin>>s;
    string h="";
    for(int i=0;i<s.length();i++)
    {
        h += c[s[i]];
    }
    reverse(h.begin(), h.end());
    ll sum=0;
    for(int i=0;i<h.length();i++)
    {
        sum+=((h[i]-'0') * p[i])%mod;
    }
    cout<<sum%mod;
}
