#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k;
    int n,m,cnt;
    int l,r,x;
    string s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    cin>>s;
    x=-1;
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='0')
        {
            if(x==-1)
                l=0;
            else
                l=x+1;
            r=i;
            for(j=l;j<=r;j++)
            {
                if(a[j]>=l+1 && a[j]<=r+1)
                    continue;
                else
                {
                    printf("NO");
                    return 0;
                }
            }
            x=i;
        }
    }
    printf("YES");
    return 0;
}
