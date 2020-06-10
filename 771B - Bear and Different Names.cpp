#include <bits/stdc++.h>
using namespace std;
string s[105];
int main() 
{
	int n, k;
	cin >> n >> k;
	for(int i = 1; i <= n; ++i)
	{
		s[i] = "Aa";
		s[i][0] += i / 26;
		s[i][1] += i % 26;
	}
	for(int start = 1; start <= n - k + 1; ++start) 
	{
		string should;
		cin >> should;
		if(should[0] == 'N')
		{
			s[start+k-1] = s[start];
		}
	}
	for(int i = 1; i <= n; ++i) 
	    cout << s[i] << " ";
}
