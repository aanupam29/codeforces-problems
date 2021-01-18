#include<bits/stdc++.h>
using namespace std;
long long h,w;
long long a=1;
int main()
{
	cin>>h>>w;
	while(a*2<=h && a*2<=w) 
	{
	    a *= 2;
	}
	long long m = min(h, a*5/4);
	long long n = min(w, a*5/4);
	if(m >= n)
	{
	    cout<<m<<" "<<a;
	}
	else 
	{
	    cout<<a<<" "<<n;
	}
	return 0;
}
