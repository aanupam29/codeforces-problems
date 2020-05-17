#include <bits/stdc++.h>
using namespace std;
const int N=555;
struct node
{
    int id;
    int w;
    int ans;
}q[N];
bool cmp(node a,node b)
{
    return a.w<b.w;
}
bool cmp1(node a,node b)
{
    return a.id<b.id;
}
int main()
{
    int n,w,i,remainder;
    scanf("%d%d",&n,&w);
    for(i=0;i<n;i++)
    {
        scanf("%d",&q[i].w);
        q[i].id=i;
        if(q[i].w%2 == 0) 
            q[i].ans = q[i].w/2;
        else 
            q[i].ans = q[i].w/2+1;
        w -= q[i].ans;
    }
    sort(q,q+n,cmp);
    if(w<0) 
        printf("-1\n");
    else
    {
        for(i=n-1;i>=0;i--)
        {
            remainder = q[i].w-q[i].ans;
            if(w >= remainder)
            {
                q[i].ans = q[i].w;
                w -= remainder;
            }
            else
            {
                q[i].ans+=w;
                w=0;
            }
            if(w==0) 
                break;
        }
        sort(q,q+n,cmp1);
        for(i=0;i<n;i++)
        {
            printf("%d ",q[i].ans);
        }
    }
    return 0;
}
