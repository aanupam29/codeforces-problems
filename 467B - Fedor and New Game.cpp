#include <bits/stdc++.h>
using namespace std;
#define loop(i, start, end) for(int i = start; i <= end; i++)
#define N 200001
#define ll long long int

int getSetbit(int n) 
{
    int cnt = 0;
    while(n!=0) 
    {
        if(n&1) 
            cnt++;
        n = n>>1;
    }
    return cnt;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin>>n>>m>>k;
    int a[m+2], ans = 0;
    loop(i, 1, m+1) 
    {
        cin>>a[i];
    } 
    loop(i, 1, m)
    {
        if(getSetbit(a[m+1]^a[i])<=k) 
            ans++;
    }
    cout<<ans;
	return 0;
}
