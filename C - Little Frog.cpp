#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,l,r;
    cin>>n;
    l=1, r=n;
    while(l < r)
    {
        cout<<l<<" ";
        l++;
        cout<<r<<" ";
        r--;
    }
    if(n%2)
    {
        cout<<l;
    }
    return 0;
}
