#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, a, b;
set<ll>s;
void fun(ll x, ll len)
{
    if(x > n || len > 10) 
        return;
    s.insert(x);
    fun(x*10+a,len+1);
    fun(x*10+b,len+1);
}
int main()
{
    cin >> n;
    for(a = 0; a <= 9; a++)
    {
        for(b = a + 1; b <= 9; b++)
        {
            fun(0,0);
        }
    }
    cout<<s.size()-1;
    return 0;
}
