#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
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
#define sz(v)          int((v).size())
#define MOD 1000000007

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	long long int M[100000],ptr,count=0,min=2e9;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&M[i]);
	}
	for(int i=0;i<n;i++)
	{
		if( min>=M[i])
		{
			min=M[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		M[i]-=min;
	}
	count+=min*n;
	ptr=k-1;
	while(M[ptr]>0)
	{
		M[ptr]--;
		count++;
		ptr--;
		if( ptr<0 )
		{
			ptr=n-1;
		}
	}
	M[ptr]=count;
	printf("%lld",M[0]);
	for(int i=1;i<n;i++)
	{
		printf(" %lld",M[i]);
	}
	putchar('\n');
	return 0;
}
