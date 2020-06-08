#include <bits/stdc++.h>
using namespace std;
long long Cnm(int n,int m) 
{
    long long s = 1;
    if(m > n/2)
        m = n-m;
    for(int i=0; i<m; i++)
        s = s*(n-i)/(i+1);
    return s;
}
int b[5] = {1, 0, 1, 2, 9};
int main() 
{
    int n, k;
    long long ans = 0;
    scanf("%d%d", &n, &k);
    for(int i = 0; i <= k; ++i) 
    {
        ans += Cnm(n, i) * b[i];
    }
    printf("%I64d\n", ans);
    return 0;
}
