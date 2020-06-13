#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    long long ans = 0;
    map<int,int>x,y;
    map<pair<int,int>,int>r;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        ans += x[a]++ + y[b]++ -r[{a,b}]++;
    }
    cout<<ans;
}
