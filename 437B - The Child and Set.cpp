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

int n, m,t=0,target;
deque<int>dq; 
vector<pp> p;
int main()
{
    cin >> target >> n;
    for(int i=1;i<=n;i++)
    {
       	bitset<30>bs(i); 
       	int pos;
       	for(int j=0;j<30;j++)
       	{
       	    if(bs[j]==1)
       	    {
       	        pos=j; 
       	        break; 
       	    }
       	}
    	p.pb(make_pair((ll)pow(2,pos),i));
    }
    sort(p.rbegin(),p.rend());
    ll sum=0,x=0,j=0;
    for(int i=0;i<p.size();i++)
    {
   	    if(sum == target) 
   	    { 
   	        break; 
   	    } 
   	    if(sum+p[i].first <= target)
   	    { 
   	        sum+=p[i].first;
   	        dq.push_back(p[i].second);
   	    }
    }
    if(sum==target)
    {
   	    cout << dq.size() <<endl;
   	    while(!dq.empty())
   	    {
   		    cout << dq.front()<<" ";
   		    dq.pop_front();
	    }
    }
    else
    {   
        minus;
    }
    return 0;
}
