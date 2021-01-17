#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    pair<int,int>a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a,a+n);
    cout<<a[n-k].first<<"\n";
    for(int i=n-k;i<n;i++)
    {
       cout<<a[i].second<<" ";
    }
    return 0;
}
