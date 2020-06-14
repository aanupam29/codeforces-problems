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

int const N = 5e5 + 1;
int a[N], freq[2 * N];
queue<int> q;
int main() 
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int un = 0, res = 0, r, l;
	for(int i = 0; i < n; i++)
	{
		if(freq[a[i]]++ == 0)
		{
			un++;
		}
		q.push(a[i]);
		while(!q.empty() && un > m)
		{
			if(--freq[q.front()] == 0)
			{
				un--;
		    }
			q.pop();
		}
		if(res < (int)q.size())
		{
			res = q.size();
			l = i - res + 1;
			r = i;
		}
	}
	printf("%d %d\n", l + 1, r + 1);
	return 0;
}
