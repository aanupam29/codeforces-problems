#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;
int main()
{
    int x[3],y[3];
    map<int,int> m;
    FOR(i,0,3) 
    {
        cin>>x[i]>>y[i]; 
        m[x[i]] = y[i]; 
        
    }
    sort(x,x+3); 
    sort(y,y+3);
    cout<<(x[2]-x[0]+y[2]-y[0]+1)<<'\n';
    FOR(i,x[0],x[1]) 
    {
        cout<<i<<' '<<m[x[0]]<<'\n';
    }
    FOR(i,x[1]+1,x[2]+1) 
    {
        cout<<i<<' '<<m[x[2]]<<'\n';
    }
    FOR(i,y[0],y[2]+1)
    {
        cout<<x[1]<<' '<<i<<'\n';
    }
    return 0;
}
