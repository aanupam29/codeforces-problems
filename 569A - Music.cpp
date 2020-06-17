#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, s, q;
	cin>>t>>s>>q;
	int sum = 0;
	while(s < t)
	{
		s *= q;
		sum++;
	}
	cout<<sum;
}
