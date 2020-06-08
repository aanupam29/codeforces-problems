#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int count3(LL x)
{
    int ret=0;
    while(x % 3 == 0)
    {
        ret++;
        x /= 3;
    }
    return ret;
}
int n;
vector<pair<int,LL>> v;
int main()
{
    cin>>n;
    v.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].second;
        v[i].first = -count3(v[i].second);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++)
    {
        cout<<v[i].second<<" ";
    }
}
