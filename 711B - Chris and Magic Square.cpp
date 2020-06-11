#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,x,y;
    cin>>n;
    long long int arr[n+1][n+1];
    long long int diag1=0,diag2=0,ans=1;
    long long int rows[505]={0},cols[505]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==0)
            {
                x=i;
                y=j;
            }
            rows[i] += arr[i][j];
            cols[j] += arr[i][j];
            if(i==j)
            {
                diag1 += arr[i][j];
            }
            if(i==n-j-1)
            {
                diag2 += arr[i][j];
            }
        }
    }
    if(x>0)
    {
        ans = rows[x-1]-rows[x];
    }
    else if(x<n-1)
    {
        ans = rows[x+1]-rows[x];
    }
    if(ans>0)
    {
        rows[x] += ans;
        cols[y] += ans;
    }
    else 
    {
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(rows[i]!=rows[0]||cols[i]!=rows[0])
        {
            printf("-1\n");
            return 0;
        }
    }
    if(x==y)
    {
        diag1+=ans;
    }
    if(x==n-y-1)
    {
        diag2+=ans;
    }
    if(diag1==diag2 && diag1==rows[0])
    {
        cout<<ans;
    }
    else 
    {
        printf("-1\n");
    }
    return 0;
}
