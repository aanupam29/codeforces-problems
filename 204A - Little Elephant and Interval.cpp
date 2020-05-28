#include <bits/stdc++.h>
using namespace std;
long long f (long long x) 
{
    long long ll = 0, ge;
    if (x <10)  
    {
        return x;
    }
    ge = x% 10;
    ll = x / 10 + 9;
    while (x >= 10) 
    {
        x /= 10;
    }
    if (x > ge) 
    {
        ll--;
    }
    return ll;
}
int main () 
{
    long long a, b;
    long long suma, sumb;
    cin>>a>>b;
    suma = f(a-1);
    sumb = f(b);
    cout<<(sumb-suma);
    return 0;
}
