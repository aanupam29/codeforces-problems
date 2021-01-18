#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[n];
    int i;
    for(i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=0;
    for(i=0;(i+1)<=m && a[i]<0;i++)
    {
    	sum += a[i];
    }	
    cout<<-sum;
	return 0;
}
