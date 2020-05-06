#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define pii pair<int,int>
#define fi first
#define se second
#define ll long long
#define MAXN 200010
using namespace std;
int n,m,k,c,arr[MAXN];
priority_queue<pair<int,int> > pq;
ll tot;
int main()
{
    scanf("%d%d%d",&n,&m,&k); 
    FOR(i,1,n+1) 
    { 
        scanf("%d",&c); 
        pq.push({c,i}); 
    }
    FOR(i,0,m*k) 
    { 
        tot += pq.top().fi;
        arr[i] = pq.top().se;
        pq.pop();
    }
    sort(arr,arr+m*k);
    printf("%lld",tot);
    for(int i=m-1;i<m*k-1;i+=m)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
