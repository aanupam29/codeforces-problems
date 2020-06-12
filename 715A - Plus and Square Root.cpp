#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 

int main()
{
	ll n;
	cin >> n;
	for(ll i = 1; i <= n; i++)
	{
		if(i == 1) 
		{
		    cout << 2 << '\n';
		}
		else
		{
		    cout << i*(i+1)*(i+1)-(i-1) << '\n';
		}
	}
}
