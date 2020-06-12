#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    ll i,j,k, a,b,n,c,p,count=0;
    cin>>a;
    if(a%2!=0)
    {
        b=((a*a)+1)/2;
        c=b-1;
        if(b>0 && c>0)
        {
            cout<<b<<" "<<c;
        }
        else
        {
            cout<<"-1";
        }
    }
    else if(a>2 && a%2==0)
    {
            b=a*a;
            b=b/4;
            c=b+1;
            b=b-1;
            cout<<b<<" "<<c;
    }
    else if(a==2)
    {
        cout<<"-1";
    }
}
