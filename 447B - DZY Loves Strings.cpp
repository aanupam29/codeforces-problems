#include<bits/stdc++.h>
using namespace std;
string s;
long long int n, a[100000], l, b, c, t, x, i, j, p, k;
int main()
{
	cin>>s;
	cin>>n;
	for (i=0;i<26;i++)
	{
	    cin>>a[i];
	}
	l = s.size();
	for (j = 1; j <= l; j++)
	{
		p = p + j*a[(s[j - 1] - 'a')];
	}
	for (i = 0; i < 26; i++)
	{
	    x = max(x, a[i]);
	}
	for (k = l + 1; k <= (l + n); k++)
	{
		p = p + (k * x);
	}
	cout<<p;
}
