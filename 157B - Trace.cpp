#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,ans = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a+n);
    reverse(a, a+n);
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0)
            ans += a[i] * a[i];
        else
            ans -= a[i] * a[i];
    }
    cout<<fixed<<setprecision(10)<<ans*3.1415926536;
    return 0;
}
