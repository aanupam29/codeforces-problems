#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int n;
int arr[300002];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<arr[(n-1)/2];
}
