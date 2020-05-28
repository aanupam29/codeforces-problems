#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

const int N = 700100;
unordered_map<string,int> mp;
vector<string> subStr[N];
int main()
{
	int i, j, k;
	int n, m;
	string s, t;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> s;
		m = 1;
		while (m<=9)
		{
			j = 0;
			while (j+m<=9)
			{
				t = s.substr(j , m);
				j++;
				if (!mp[t])
					mp[t] = i+1;
				else
				{
					if (mp[t] != i+1)
						mp[t] = -1;
				}
				subStr[i].push_back(t);
			}
			m++;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 45; j++)
		{
			s = subStr[i][j];
			if (mp[s] == i+1)
			{
				cout << s << endl;
				break;
			}
		}
	}
	return 0;
}
