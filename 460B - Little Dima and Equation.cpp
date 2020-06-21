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

int digit(long long int n)
{
	n = abs(n);
	int c = 0;
	while(n)
	{
		c+= (n%10);
		n /= 10;
	}
	return c;
}
ll po(int x,int y)
{
    ll answer = 1;
    for(int i=1;i<=y;i++)
    {
        answer *= x;
    }
    return answer;
}
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int answer = 0;
    vector<ll> Answer;
	for(int i=1;i<=81;i++)
	{
		ll x = b*po(i,a) + c;
		if(x>0 && digit(x)==i && x<1000000000)
		{
		    Answer.push_back(x);
			answer++;
		}
	}
	printf("%d\n",answer);
    for(int i=0;i<answer;i++)
    {
        printf("%lld ",Answer[i]);
    }
	return 0;
}
