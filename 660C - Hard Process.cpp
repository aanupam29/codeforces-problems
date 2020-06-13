#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int v[300005];
int main()
{
	ios_base :: sync_with_stdio(0); cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0 ; i < n ; ++i)
	{
		cin >> v[i];
	}
	int ans = 0;
	int pb, pe;
	int pointer_a, pointer_b;
	pointer_a = pointer_b = 0;
	int changes = 0;
	while (pointer_b < n)
	{
		if (!v[pointer_b])
		{
		    ++changes;
		}
		while (changes > k)
		{
			if (!v[pointer_a])
			{
			    --changes;
			}
			++pointer_a;
		}
		if (pointer_b - pointer_a + 1 > ans)
		{
			ans = pointer_b - pointer_a + 1;
			pb = pointer_a;
			pe = pointer_b;
		}
		++pointer_b;		
	}
	cout << ans << '\n';
	for (int i = pb; i <= pe; ++i) 
	{
	    v[i] = 1;
	}
	for (int i = 0 ; i < n ; ++i)
	{
		if (i) 
		{
		    cout << ' ';
		}
		cout << v[i];
	}
	cout << '\n';
}
