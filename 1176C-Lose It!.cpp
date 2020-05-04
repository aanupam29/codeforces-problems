#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    fast
    int n;
    cin>>n;
    int a[n];
    input(a,n)
    if(n < 6)
    {
        cout<<n;
        return 0;
    }
    int arr[6] = {0}; 
    ff(i,0,n-1)
    {
        if(a[i] == 4)
        {
            arr[0]++;
        }
        else if(a[i] == 8)
        {
            if(arr[0] > arr[1])
            {
                arr[1]++;
            }
        }
        else if(a[i] == 15)
        {
            if(arr[1] > arr[2])
            {
                arr[2]++;
            }
        }
        else if(a[i] == 16)
        {
            if(arr[2] > arr[3])
            {
                arr[3]++;
            }
        }
        else if(a[i] == 23)
        {
            if(arr[3] > arr[4])
            {
                arr[4]++;
            }
        }
        else
        {
            if(arr[4] > arr[5])
            {
                arr[5]++;
            }
        }
    }
    cout<<n-6*arr[5];
	return 0;
}
