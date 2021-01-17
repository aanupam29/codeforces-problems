#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
	int x,d,n,a0,ans=0;
	cin>>d>>n>>a0;
	for(int i=1;i<n;i++)
	{
	    cin>>x;
	    ans += (d-a0);
	    a0 = x;
	}
	cout<<ans;
	return 0; 
}
