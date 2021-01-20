#include<bits/stdc++.h>
#define ll long long
using namespace std ;
bool comp(pair<int,int> &a, pair<int,int> &b)
{
    if(a.second == b.second)
        return a.first > b.first ;
    return a.second > b.second ;
}
int main()
{
    int n ;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second ;
    }
    sort(v.begin(),v.end(),comp) ;
    int counter = 1;
    int ans = 0,i = 0;
    while(counter && i<n)
    {
        ans += v[i].first ;
        counter += v[i].second ;
        counter-- ;
        i++ ;
    }
    cout<<ans;
}
