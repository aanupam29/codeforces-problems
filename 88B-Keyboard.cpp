#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
int main() 
{
    fast
    scanf("%d%d%d", &n, &m, &k);
	for (int i = 0;i < n; i++)
		scanf("%s", key[i]);
	for (int i = 0;i<n;i++) 
		for (int j = 0;j < m;j++)
		{
			if (key[i][j] == 'S')
				shift.push_back(make_pair(i, j));
			else
				posKey[key[i][j] - 'a'].push_back(make_pair(i, j));
		}
	for (int i = 0;i<26; i++)
		for (int j = 0;j <posKey[i].size() && !can[i]; j++)
		{                                 
			can[i] = can[i] | check(posKey[i][j].first, posKey[i][j].second);
		}
	scanf("%d%s", &q, text);
	for (int i = 0;i < q;i++)
	{
		if (islower(text[i]))
		{
			if (posKey[text[i] - 'a'].empty())
			{
				res = -1;
				break;
			}
		}
		else
		{
			text[i] = tolower(text[i]);
 
			if (shift.empty() || posKey[text[i] - 'a'].empty())
			{
				res = -1;
				break;
 
			}
			if (!can[text[i] - 'a'])
				++res;
		}
	}
	cout<<res;
	return 0;
}
