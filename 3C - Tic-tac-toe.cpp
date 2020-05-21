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

char b[9];
int cx=0,c0=0,wx=0,w0=0;
bool ch(char c,int i)
{
	return ((b[i]==c&&b[i+3]==c&&b[i+6]==c)||b[i*3+0]==c&&b[i*3+1]==c&&b[i*3+2]==c)||(b[0]==c&&b[4]==c&&b[8]==c)||(b[2]==c&&b[4]==c&&b[6]==c);
}
int main()
{
	for(int i=0;i<9;i++) 
	{
		cin>>b[i];
		if(b[i]=='X') 
		    cx++;
		else if(b[i]=='0') 
		    c0++;
	}
	for(int i=0;i<3;i++)
	{
		wx += ch('X',i);
		w0 += ch('0',i);
	}
	if((w0>0 && cx!=c0)||(cx!=c0 && cx!=c0+1)||(wx>0 && cx!=c0+1)||(w0>0 && wx>0)) 
	    cout<<"illegal";
	else if(wx) 
	    cout<<"the first player won";
	else if(w0) 
	    cout<<"the second player won";
	else if(cx+c0==9) 
	    cout<<"draw";
	else if(cx==c0) 
	    cout<<"first";
	else 
	    cout<<"second";
	ret;
} 
