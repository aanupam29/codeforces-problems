#include<bits/stdc++.h>
using namespace std;
string s;
int sz;
int cntn(int& i) 
{
	unsigned long long cnt = 1;
	for (i++; i < sz && s[i - 1] - '0' + s[i] - '0' == 9; i++)
	{
	    cnt++;
	}
	return ((cnt & 1) ? cnt / 2 + 1 : 1);
}
int main() 
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> s;
	sz = (int)s.size();
	unsigned long long ans = 1;
	for (int i = 0; i < sz;) 
	{
		ans *= cntn(i);
	}
	cout << ans;
	return 0;
}
