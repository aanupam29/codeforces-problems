#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
	cin>>n;
	vector<int> a(n);
	for (int i=0;i<n;++i) 
	{
		cin>>a[i];
	}
	int pr = min(a[0], a[n - 1]);
	for (int i=1;i<n;++i) 
	{
		pr = min(pr, max(a[i], a[i - 1]));
	}
	cout<<pr;
}
