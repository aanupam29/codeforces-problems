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

int D(char* s,int r)
{
    int m=0,c;
    for(;c=*s++;m=m*r+c)
    {
        c -= 48 + (c>=65)*7;
        if(c >= r)
        {
            return 60;
        }
    }
    return m;
}
main()
{
	int i;
    char a[9],b[9];
    vector<int>u;
    scanf("%[0-9A-Z]:%[0-9A-Z]",a,b);
    for(i=2;i<61;i++)
    {
		if(D(a,i)<=23&&D(b,i)<=59)
		{
			u.push_back(i);
		}
    }
    if(u.empty())
    {
        puts("0");
    }
    else if(u.back()==60)
    {
        minus;
    }
    else 
    {
        for(int x:u)
        {
		 	printf("%d ",x);
        }
    }
}
