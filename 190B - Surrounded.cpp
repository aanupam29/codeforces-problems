#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1, x2, y1, y2, r1, r2, ans=0;
    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;
    double d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
    d = sqrt(d);
    if(d >= r1 + r2)
    {
        ans = d-r1-r2;
    }
    else if(abs(r1-r2) > d)
    {
        ans = abs(r1-r2) - d;
    }
    cout<<setprecision(18)<<fixed<<ans/2;
    return 0;
}
