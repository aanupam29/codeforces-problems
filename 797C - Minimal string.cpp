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
	fast;
	string s,u;
	cin>>s;
	int n = l(s);
	stack<char> t;
	t.push('#');
	int a[26] = {0};
	cin>>s;
	ff(i,0,n-1)
	{
	    a[s[i]-'a']++;
	}
	int flag;
	ff(i,0,n-1)
	{
	    t.push(s[i]);
	    a[s[i]-'a']--;
	    while(1)
	    {
	        flag = 0;
	        if(t.top() == '#')
	        {
	            break;
	        }
	        int x = t.top()-'a';
	        ff(i,0,x-1)
	        {
	            if(a[i] > 0)
	            {
	                flag = 1;
	                break;
	            }
	        }
	        if(flag)
	        {
	            break;
	        }
	        else
	        {
	            u.pb(t.top());
	            t.pop();
	        }
	    }
	}
	while(t.top()!='#')
	{
	    u.pb(t.top());
	    t.pop();
	}
	cout<<u;
	return 0;
}
