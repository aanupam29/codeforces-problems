#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,k,mxa;
vector<int> t[MAXN];
int main()
{
    cin>>n>>k;
    while(n--)
    {
        int a;
        cin>>a;
        mxa = max(mxa,a);
        int cur=0;
        while(a)
        {
            t[a].push_back(cur);
            cur++;
            a = a/2;
        }
        t[0].push_back(cur);
    }
    int ans = INT_MAX;
    for(int i=0;i<=mxa;i++)
    {
        if(t[i].size()<k) 
            continue;
        sort(t[i].begin(),t[i].end());
        int sum=0;
        for(int j=0;j<k;j++) 
            sum+=t[i][j];
        ans = min(ans,sum);
    }
    cout<<ans;
    return 0;
}
