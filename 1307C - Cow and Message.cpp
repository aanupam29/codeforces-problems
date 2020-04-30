#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>
#define input for(int i=0;i<n;i++) cin>>a[i];

const int N = 1e5 + 5;
char s[N];
lli ans1[26], ans2[26][26];
int main() {
	scanf("%s", s);
	int n = strlen(s);
	for (int i = 0; i < n; i++) 
	{
		int c = s[i] - 'a';
		for (int j = 0; j < 26; j++) 
		{
			ans2[j][c] += ans1[j]; 
		}
		ans1[c]++; 
	} 
	lli ans = 0;
	for (int i = 0; i < 26; i++) 
	    ans = max(ans, ans1[i]);
	for (int i = 0; i < 26; i++) 
	{
		for (int j = 0; j < 26; j++) 
		    ans = max(ans, ans2[i][j]); 
	} 
	printf("%lld", ans);
	return 0;
} 
