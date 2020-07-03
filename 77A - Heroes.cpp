#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
LL n,a,b,c,i,j,k,p,q,r,mi=INT_MAX;
cin>>n;
 
string x,y,z;
 
map <string,LL> mp;
 
mp["Anka"]=0;  mp["Chapay"]=1; mp["Cleo"]=2; mp["Troll"]=3; mp["Dracul"]=4; mp["Snowy"]=5;mp["Hexadecimal"]=6;
 
vector <LL> g[7],v;
 
for(i=0;i<7;i++)
	v.push_back(i);
 
for(i=0;i<n;i++)
{cin>>x>>y>>z;
g[mp[x]].push_back(mp[z]);
}
 
cin>>a>>b>>c;
 
for(i=1;i<=5;i++)
	for(j=1;j+i<=6;j++)
		{k=7-i-j;
 
		if(max(a/i,max(b/j,c/k))-min(a/i,min(b/j,c/k))<=mi)
		{mi=max(a/i,max(b/j,c/k))-min(a/i,min(b/j,c/k));
		p=i;
		q=j;
		r=k;
		}
		}
 
LL s,sm=0;
map <LL,LL> T;
 
 
while(next_permutation(v.begin(),v.end()))
{
s=0;
for(i=0;i<p;i++)
	T[v[i]]=1;
 
for(i=p;i<p+q;i++)
	T[v[i]]=2;
 
for(i=p+q;i<p+q+r;i++)
	T[v[i]]=3;
 
for(i=0;i<7;i++)
for(j=0;j<g[i].size();j++)
	if(T[i]==T[g[i][j]])
			s++;
 
if(s>sm)
	sm=s;
 
}	
 
cout<<mi<<' '<<sm<<endl;
 
}
