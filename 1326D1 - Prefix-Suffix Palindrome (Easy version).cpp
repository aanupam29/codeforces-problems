#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=2e5+5;
string s;
bool ju(string &s,int l,int r)
{
	while(l<=r&&s[l]==s[r])
	    ++l,--r;
	return l>r;
}
int main()
{
    int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		int ls=s.size();
		if(ju(s,0,ls-1))
		{
			cout<<s<<endl;
			continue;
		}
		int l=0,r=ls-1,r_,l_;
		while(l<r&&s[l]==s[r])
		    ++l,--r;
		for(int i=r;i>=l;--i)
			if(ju(s,l,i))
			{
				r_=i;
				break;
			}
		for(int i=l;i<=r;++i)
			if(ju(s,i,r))
			{
				l_=i;
				break;
			}
		cout<<s.substr(0,l);
		cout<<(r_-l>r-l_?s.substr(l,r_-l+1):s.substr(l_,r-l_+1));
		cout<<s.substr(r+1)<<endl;;
	}
    return 0;
}
