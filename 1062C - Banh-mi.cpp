#include <bits/stdc++.h>
using namespace std;
typedef long long LL; 
char c;
int a[101001],n,p,l,r; 
const LL mod = 1e9+7;
LL num[101010]; 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>p;
	num[0] = 1;
	for(int i =1;i<100001;i++)
	{
		num[i] = num[i-1]*2 %mod;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		a[i] = a[i-1] + c - '0';
	}
	while(p--)
	{
		cin>>l>>r;
		cout<<(LL)(num[a[r]-a[l-1]]-1)*(LL)num[r-l+1-a[r]+a[l-1]]%mod<<endl;   
	}
	return 0;
}
