#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    string s;
	cin >> n >> s;
	vector <int> l(n), r(n);
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == 'G')
		{
			l[i] = 1;
			if(i > 0) l[i] += l[i - 1];
		}
	}
	for(int i = n - 1; i >= 0; --i)
	{
		if(s[i] == 'G')
		{
			r[i] = 1;
			if(i + 1 < n) r[i] += r[i + 1];
		}
	}
	int res = 0;
	int cntG = 0;
	for(int i = 0; i < n; ++i)
			cntG += s[i] == 'G';
	for(int i = 0; i < n; ++i)
	{
		if(s[i] == 'G') 
		    continue;
		int nres = 1;
		if(i > 0) nres += l[i - 1];
		if(i + 1 < n) nres += r[i + 1];
		res = max(res, nres);
	}
	res = min(res, cntG);
	if(cntG == n) res = cntG;
	cout << res << endl;
	return 0;
}
