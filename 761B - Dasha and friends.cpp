#include <bits/stdc++.h>
using namespace std;
#define LL long long
int n,L;
int a[105],b[105];
bool check(int x[],int y[])
{
    int flag=1;
    for(int i=0;i<n;i++)
        if(x[i]!=y[i]) flag=0;
    return flag;
}
int main()
{
    while(~scanf("%d %d",&n,&L))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i) a[i]-=a[0];
        }
        a[0]=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            if(i) b[i]-=b[0];
        }
        b[0]=0;
        int flag=0;
        if(check(a,b)) flag=1;
        for(int i=0;i<n;i++)
        {
            int x = a[1];
            for(int j=1;j<n;j++)
                a[j-1] = a[j]-x;
            a[n-1] = L-x;
            if(check(a,b)) 
                flag=1;
            if(flag)
                break;
        }
        if(flag)
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0;
}
