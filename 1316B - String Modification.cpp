#include <bits/stdc++.h>
using namespace std;

string modified(string& s, int n, int k) 
{
	string result_prefix = s.substr(k - 1, n - k + 1);
	string result_suffix = s.substr(0, k - 1);
	if (n % 2 == k % 2)
		reverse(result_suffix.begin(), result_suffix.end());
	return result_prefix + result_suffix;
}
int main () 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s, best_s, temp;
	int t, n, best_k;
	cin >> t;
	while (t--) 
	{
		cin >> n >> s;
		best_s = modified(s, n, 1);
		best_k = 1;
		for (int k = 2; k <= n; ++k) {
			temp = modified(s, n, k);
			if (temp < best_s) {
				best_s = temp;
				best_k = k;
			}
		}
		cout << best_s << '\n' << best_k << '\n';
	}
	return 0;
}
