#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define all(a) a.begin(),a.end()
#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define f(i,x,n) for(ll i=x;i<n;i++)
using namespace std;
int main()
{  
	 ll n,m; cin>>n>>m;
	 ll a[n]; f(i,0,n) cin>>a[i];
	 ll inc[n],dec[n];
	 ll c=1;
	 inc[0] =1; dec[n-1]=1;
	 f(i,1,n)
	 {
	 	if(a[i]<=a[i-1])
	 	{
	 		c++;
	 	}
	 	else
	 	{
	 	    c=1;
	 	}
	 	inc[i] =c;
	 }
	 c=1;
	 for(ll i=n-2;i>=0;i--)
	 {
	 	if(a[i]<=a[i+1])
	 	{
	 		c++;
	 	}
	 	else
	 	{
	 	    c=1;
	 	}
	 	dec[i]=c;
	 }
	 while(m--)
	 {
	 	ll x,y; cin>>x>>y;
	 	x--; y--;
	 	if(inc[y]+dec[x] >=y-x+2)
	 	{
	 		cout<<"Yes"<<endl;
	 	}
	 	else
	 	{
	 	    cout<<"No"<<endl;
	 	}
	 }
	return 0; 
}
