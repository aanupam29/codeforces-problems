#include<bits/stdc++.h>
using namespace std;

string tolower(string s) 
{
	string ans = "";
	for (int i = 0; i < s.size(); i++) 
	{
		ans += tolower(s[i]);
	}
	return ans;
}
int pos[200];
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string a[n], b[n];
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];
		b[i] = tolower(a[i]);
	}
	string w;
	cin >> w;
	string wc = tolower(w);
	char lt;
	cin >> lt;
	for (int i = 0; i < n; i++)
	{
		string s = b[i];
		for (int j = 0; j < wc.size(); j++) 
		{
			if (wc.substr(j, s.size()) == s) 
			{
				for (int k = j; k < (s.size() + j); k++) 
				{
					pos[k] = 1;
				}
			}
		}
	}
	string ans = w;
	for (int i = 0; i < w.size(); i++) 
	{
		if (pos[i]) 
		{
			if (tolower(w[i]) == lt) 
			{
				if (isupper(w[i]))
				{
					if (w[i] == 'A') 
					{
						ans[i] = 'B';
					}
					else
					{
						ans[i] = 'A';
					}
				}
				else
				{
					if (w[i] == 'a') 
					{
						ans[i] = 'b';
					}
					else
					{
						ans[i] = 'a';
					}
				}
			} 
			else 
			{
				if (isupper(w[i])) 
				{
					ans[i] = toupper(lt);
				}
				else 
				{
					ans[i] = lt;
				}
			}
		}
	}
	cout << ans << endl;
}
