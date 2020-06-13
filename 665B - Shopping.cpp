#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int n,m,k;
int tag[105];
int a[105];
int main()
{
    int x;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=k;i++)
    {
        scanf("%d",&a[i]);
        tag[a[i]]=i;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&x);
            ans+=tag[x];
            for(int p=1;p<=k;p++)
            {
                if(tag[a[p]]<tag[x])
                    tag[a[p]]++;
            }
            tag[x]=1;
        }
    }
    printf("%d\n",ans);
    return 0;
}
