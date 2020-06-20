#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)        for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
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
#define MOD            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";

void print(vector<pair<int, int> > &v) 
{
	for (int i = 0 ; i < v.size() ; i++) cout << v[i].second << ' ';
	cout << endl;
}
int main() 
{
	int n;
	cin >> n;
	vector<pair<int, int> > input;
	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;
		input.push_back(make_pair(x, i + 1));
	}
	sort(input.begin(), input.end());
	vector<pair<int, int> > swaps;
	for (int i = 1 ; i < n && swaps.size() < 2 ; i++)
	{
		if (input[i - 1].first == input[i].first)
		{
			swaps.push_back(make_pair(i - 1, i));
		}
	}
	if (swaps.size() < 2)
	{
	    cn;
	    ret;
	}
	cy;
	print(input);
	swap(input[swaps[0].first], input[swaps[0].second]);
	print(input);
	swap(input[swaps[1].first], input[swaps[1].second]);
	print(input);
}
