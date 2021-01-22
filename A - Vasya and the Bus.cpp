#include<bits/stdc++.h>
using namespace std ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin>>n>>m;
    if(!n)
    {
        if(!m)
        {
            cout<<0<<' '<<0<<' ';
        }
        else
        {
            cout<<"Impossible";
        }
    }
    else
    {
        if(!m)
        {
            cout<<n<<' '<<n<<' ';
        }
        else
        {
            cout<<max(n,m)<<' '<<n+m-1<<' ';
        }
    }
    return 0 ;
}
