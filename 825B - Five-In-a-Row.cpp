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

char a[10][10];
int main()
{
    int i,j,k,s,e,l,f,w,sum;
    for(i=1; i<10; i++)
        scanf("%s",a[i]);
    for(i=0; i<10; i++)                               
    {
        for(j=0; j<10; j++)                          
        {
           if(a[i][j]=='.')                     
           {
                sum=0;                          
                for(k=j+1; k<10&&a[i][k]=='X'; k++)
                    sum++;
                for(k=j-1; k>=0&&a[i][k]=='X'; k--)
                    sum++;
                if(sum>=4)                          
                {
                    cy;
                    ret;
                }
                sum=0;                             
                for(s=i+1; s<10&&a[s][j]=='X'; s++) 
                    sum++;
                for(s=i-1; s>=0&&a[s][j]=='X'; s--) 
                    sum++;
                if(sum>=4)                         
                {
                    cy;
                    ret;
                }
                sum=0;                             
                for(e=i+1,f=j+1; e<10&&f<10&&a[e][f]=='X'; e++,f++)  
                    sum++; 
                for(e=i-1,f=j-1; e>=0&&f>=0&&a[e][f]=='X'; e--,f--) 
                    sum++;
                if(sum>=4)
                {
                    cy;
                    ret;
                }
                sum=0;
                for(l=i+1,w=j-1; l<10&&w>=0&&a[l][w]=='X'; l++,w--)
                    sum++;
                for(l=i-1,w=j+1; l>=0&&w<10&&a[l][w]=='X'; l--,w++)
                    sum++;
                if(sum>=4)
                {
                    cy;
                    ret;
                }
            }
        }
    }
    cn;
    return 0;
}
