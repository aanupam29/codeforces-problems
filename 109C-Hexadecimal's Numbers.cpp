#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define pb              push_back
#define pii             pair<int,int>
#define fastio			ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
const int N=1e10+5;
vector<int>ans;
void gen(int n)
{
    if(n>=N)
        return;
    ans.pb(n);
    gen(n*10);
    gen(n*10+1);
}
int32_t main()
{
    fastio;
    int n;
    cin>>n;
    gen(1);
    sort(ans.begin(),ans.end());
    int cnt=0;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]>n)
          break;
        else
          cnt++;
    }
    cout<<cnt;
}
