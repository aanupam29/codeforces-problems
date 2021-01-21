#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m;
    cin>>n>>m;
    map<string,string> ans;
    string a,b;
    while(m--) 
    {
        cin>>a>>b;
        ans[a] = (b.size() < a.size() ? b : a);
    }
    while(n--) 
    {
        cin>>a;
        cout<<ans[a]<<" ";
    }
    return 0;
}
