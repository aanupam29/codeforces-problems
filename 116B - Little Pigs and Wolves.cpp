#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[15][15];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            if(arr[i][j]=='W' && (arr[i-1][j]=='P' || arr[i+1][j]=='P' || arr[i][j-1]=='P' || arr[i][j+1]=='P'))
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
