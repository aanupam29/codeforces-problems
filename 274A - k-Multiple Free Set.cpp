#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
#define ulli           unsigned long long int 
#define li             long int 
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
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define sz(v)          int((v).size())
#define MOD 1000000007

#define SZ(c) ((int)((c).size()))
#define REP(i, n) for (int i = 0; i < (int)(n); ++i)
#define FOR(i, b, e) for (int i = (int)(b); i <= (int)(e); ++i)
#define ALL(c) (c).begin(), (c).end()
const int MAXN = 1 << 17;
int N, K;
int a[MAXN];
int main()
{
	ios::sync_with_stdio(0);
	cin >> N >> K;
	if (K == 1)
	{
		cout << N << endl;
		return 0;
	}
	REP(i, N) cin >> a[i];
	sort(a, a + N);
	vector< int > ans;
	REP(i, N)
	{
		if (a[i] % K == 0)
		{
			if (!binary_search(ALL(ans), a[i] / K))
			{
				ans.push_back(a[i]);
			}
		}
		else
		{
			ans.push_back(a[i]);
		}
	}
	cout << SZ(ans);
	return 0;
}
