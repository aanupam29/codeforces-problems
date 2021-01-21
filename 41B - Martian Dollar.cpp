#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,b;
    cin>>n>>b;
    int arr[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int ans = b;
    int temp = arr[1];
    for(int i=2;i<=n;i++)
    {
        if(arr[i] <= temp)
        {
            temp=arr[i];
        }
        else
        {
            int kali = b/temp;
            int a = kali*temp;
            int x = kali*arr[i];
            ans = max(ans, b-a+x);
        }
    }
    cout<<ans;
}
