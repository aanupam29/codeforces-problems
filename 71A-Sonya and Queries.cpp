#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 
int n;
int a[300010];
ll strToBin(string st)
{
	ll res = 0;
	ll j = 1;
	for (int i=st.length()-1; i>=0; i--)
	{
		if (st[i]%2 == 1)
		{
			res += j;
		}
		j*=2;
	}
	return res;
}
int main()
{
	cin>>n;
	for (int i=0; i<n; i++) 
	{
		char c;
		string s;
		cin>>c>>s;
		ll num = strToBin(s);
		if (c=='?') 
		{
			cout<<a[num]<<endl;
		}
		else if (c=='+')
		{
			a[num]++;
		}
		else if (c=='-') 
		{
			a[num]--;
		}
	}
	return 0;
}
