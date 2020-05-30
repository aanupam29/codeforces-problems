#include <bits/stdc++.h>
using namespace std;

const int SIZE = 200000;
int p[SIZE];
int ans[SIZE][2];
int ans_cnt;
bool judge(int a[], int n)
{
    static int used[SIZE+1];
    for(int i = 1; i <= n; i++) used[i] = 0;
    for(int i = 0; i < n; i++) used[a[i]] = 1;
    for(int i = 1; i <= n; i++) {
        if(!used[i]) return 0;
    }
    return 1;
}
bool judge(int len1, int n)
{
    return judge(p, len1) && judge(p + len1, n - len1);
}
int main() 
{
    int t = 0;
    scanf("%d", &t);
    while(t--) 
    {
        ans_cnt = 0;
        int n;
        scanf("%d", &n);
        int ma=0;
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &p[i]);
            if(ma < p[i]) ma = p[i];
        }
        if(judge(n - ma,n))
        {
            ans[ans_cnt][0] = n - ma;
            ans[ans_cnt++][1] = ma;
        }
        if(ma * 2 != n && judge(ma,n)) 
        {
            ans[ans_cnt][0] = ma;
            ans[ans_cnt++][1] = n - ma;
        }
        printf("%d\n", ans_cnt);
        for(int i = 0; i < ans_cnt; i++) 
        {
            printf("%d %d\n", ans[i][0], ans[i][1]);
        }
    }
    return 0;
}
