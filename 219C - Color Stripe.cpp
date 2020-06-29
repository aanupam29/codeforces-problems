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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())
#define N 111

int main()
{
   fast;
   ll n,k,c=0;
   cin>>n>>k;
   string s;
   cin>>s;
   if(k==2)
   {
       string s1,s2;
       for(int i=0;i<n;i++)
       {
           if(i%2==0)
           {
               s1+='A';
               s2+='B';
           }
           else
           {
               s2+='A';
               s1+='B';
           }
       }
       int a=0,b=0;
       for(int i=0;i<n;i++)
       {
           if(s1[i]!=s[i])
           {
               a++;
           }
           else if(s2[i]!=s[i])
           {
               b++;
           }
       }
       if(a<b)
       {
           cout<<a<<endl<<s1<<endl;
       }
       else
       {
           cout<<b<<endl<<s2<<endl;
       }
       return 0;
   }
   char maxchar='A'+k-1;
   for(int i=0;i<n-1;i++)
   {
       if(s[i]==s[i+1])
       {
           c++;
           char ch='A';
           while(ch<=maxchar&&(ch==s[i]||(i+2<n&&ch==s[i+2])))
           {
               ch++;
           }
           s[i+1]=ch;
       }
   }
   cout<<c<<endl<<s<<endl;
   return 0;
}
