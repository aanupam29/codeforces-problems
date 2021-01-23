#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int a[n+1] = {0};
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i] += a[i-1];
    }
    int count=0, left;
    for(int i=1; i<n; i++)
    {
        left = a[n] - a[i];
        if(a[i] == left)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
