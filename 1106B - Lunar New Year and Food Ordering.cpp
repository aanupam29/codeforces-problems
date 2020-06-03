#include <bits/stdc++.h>

#define N 300010
#define PII pair<int, int> 
using namespace std;
typedef long long LL;
int n, m, a[N], c[N], t, d;
LL ans = 0;
priority_queue<PII, vector<PII>, greater<PII> > Q;
int main()
{
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		cin>>a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin>>c[i];
		Q.push(make_pair(c[i], i));
	}
	for (int i = 1; i <= m; i++)
	{
		cin>>t>>d;
		if (d <= a[t])
		{
			a[t] -= d;
			cout<<(1LL * d * c[t])<<endl;
		} 
		else
		{
			bool flag = false;
			LL ans = 1LL * a[t] * c[t];
			d -= a[t];
			a[t] = 0;
			while (!Q.empty())
			{
				while (!Q.empty() && a[Q.top().second] == 0) 
				{
				    Q.pop();
				}
				if (Q.empty())
				{
				    break;
				}
				PII now = Q.top();
				if (d <= a[now.second])
				{
					a[now.second] -= d;
					ans += 1LL * d * now.first;
					flag = true;
					cout<<ans<<endl;;
					break;
				} 
				else 
				{
					ans += 1LL * a[now.second] * now.first;
					d -= a[now.second];
					a[now.second] = 0;
					Q.pop();
				}
			}
			if (!flag)
			{
				cout<<0<<endl;
			}
		}
	}
}
