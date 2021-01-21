#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum = v[0];
    for(int i=0;i<n-1;i++)
    {
        sum += abs(v[i]-v[i+1])+1;
    }
    cout<<sum+n;
    return 0;
}
