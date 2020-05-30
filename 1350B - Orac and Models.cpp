#include <bits/stdc++.h>
using namespace std;
const int MAXN = 500005;
inline int readint()
{
	int res = 0;
	char c = 0;
	while(!isdigit(c))
		c = getchar();
	while(isdigit(c))
		res = res*10+c-'0', c = getchar();
	return res;	
}
int n,a[MAXN],f[MAXN];
int main()
{
	int T = readint();
	while(T--)
	{
		n = readint();
		for(int i = 1; i<=n; i++)
			a[i] = readint();
		for(int i = 1; i<=n; i++)
			f[i] = 1;
		for(int i = 1; i<=n; i++) 
			for(int j = i*2; j<=n; j += i)
				if(a[i]<a[j])
					f[j] = max(f[j],f[i]+1);
		int ans = 0;
		for(int i = 1; i<=n; i++)
			ans = max(ans,f[i]);
		cout << ans << endl;
	}
	return 0;
}
