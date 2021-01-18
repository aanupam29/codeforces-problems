#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        int t = 1;
        for(int j = i-1;j>=0 && a[j] <= a[j+1];j--)
            t++;
        for(int j = i+1;j<n && a[j] <= a[j-1];j++) 
            t++;
        ans = max(t, ans);
    }
    cout<<ans;
}
