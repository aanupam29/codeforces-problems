#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[k] = {0};
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a[i%k] += t;
    }
    int m = 0;
    for(int i=1;i<k;i++)
    {
        if(a[i] < a[m])
        {
            m = i;
        }
    }
    cout<<m+1;
}
