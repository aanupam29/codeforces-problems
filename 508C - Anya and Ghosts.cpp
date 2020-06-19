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

int main()
{   
    ios::sync_with_stdio(false);
    int m, t, r;
    cin >> m >> t >> r;
    if(t < r)
    {
        minus;
    	return 0;
    }
    int arr[1005];
    for (int i = 0; i < 1005; ++i)
    {
    	arr[i] = 0;
    }
    int w[305];
    int temp,noOfCandles = 0;
    for (int i = 1; i <= m; ++i)
    {
    	cin >> temp;
    	w[i] = temp + 300;
    }
    for (int i = m; i >= 1; --i)
    {
    	if(arr[w[i]] < r)
    	{
    		noOfCandles += (r - arr[w[i]]);
    		for(int j = w[i] - t + 1 ; j <=(w[i] - t + (r - arr[w[i]]) )  ; j++)
    		{
    			arr[j] += j - (w[i] - t);
    		}
    		for (int j =(w[i] - t + (r - arr[w[i]])) ; j <= w[i] ; ++j)
    		{
    			arr[j] = r;
    		}
    	}
    }
    cout << noOfCandles;
    return 0;
}
