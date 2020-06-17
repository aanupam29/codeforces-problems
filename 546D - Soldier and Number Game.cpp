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
#define mx 10000000

const int MAX = 5000001;
int arr[MAX],P[MAX];
void sieve ()
{
    int i,j,t,k;
    arr[0] = arr[1] = 0;
    for (i=2; i<MAX; i++)
    {
        arr[i] = i;
    }
    for (i=4; i<MAX; i+=2)
    {
        arr[i] = 2;
    }
    for (i=3; i*i<=MAX; i+=2)
    {
        if (arr[i] == i)
        {
            for (j=i*i; j<MAX; j+=2*i)
            {
                if (arr[j] == j)
                {
                    arr[j] = i;
                }
            }
        }
    }
    for (i=2; i<5000001; i++)
    {
    	P[i] = P[i/arr[i]]+1;
    }
    for (i=2; i<5000001; i++)
    {
    	P[i] += P[i-1];
    }
}
int main()
{
    sieve ();
    tc;
    int a,b;
    w(t)
    {
        cin>>a>>b;
        cout<<P[a]-P[b]<<endl;
    }
    return 0;
}
