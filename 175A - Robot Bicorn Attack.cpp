#include <bits/stdc++.h>
using namespace std;
bool check(string s, long long &a)
{
	if(s.size()>1 && s[0]=='0')
	{
		return 0;
	}
	a=atoll(s.c_str());
	if(a>1000000)
	{
		return 0;
	}
	return 1;
}
int main()
{
	string s; 
	cin >> s;
	int n; 
	n = s.size();
	long long ans = -1;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			long long a,b,c;
			if(check(s.substr(0,i+1),a) && check(s.substr(i+1,j-i),b) && check(s.substr(j+1,n-j),c))
			{
				ans=max(ans,a+b+c);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
