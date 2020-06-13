#include <bits/stdc++.h>
using namespace std;
bool sor(string a,string b)
{
	return (a+b)<(b+a);
}
int main()
{
    int n,i;
	cin >> n;
	vector<string> s(n);
	for(i=0;i<n;i++)
	{
		cin >> s[i];
	}
	sort(s.begin(),s.end(),sor);
	for(i=0;i<n;i++)
	{
		cout << s[i];
	}
	return 0;
}
