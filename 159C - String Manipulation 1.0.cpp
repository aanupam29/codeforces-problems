#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
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
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
	int i, j, k;
	int n, m;
	char ch;
	string s,t;
	cin>>k;
	cin >> s;
	t = "";
	for (i = 0; i < k; i++)
	{
		t += s;
	}
	vector<int> a[26];
	for (i = 0; i < t.length(); i++)
	{
		a[t[i] - 'a'].push_back(i);
	}
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		cin >> ch;
		j = a[ch - 'a'][m - 1];
		t[j] = '#';
		a[ch - 'a'].erase(a[ch - 'a'].begin() + m - 1);
	}
	for (i = 0; i < t.length(); i++)
	{
		if (t[i] != '#')
		{
			cout << t[i];
		}
	}
	return 0;
}
