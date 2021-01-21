#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d;
    cin>>n>>m>>d;
    vector<int> v1;
    for(int i = 0;i<n*m;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int ans = 0;
    sort(v1.begin(),v1.end());
    int mid = (n*m)/2;
    int flag = 1;
    for(int i = 0;i<n*m;i++)
    {
        if((v1[i]-v1[mid]) % d)
        {
            flag = 0;
            break;
        }
        ans += abs((v1[i]-v1[mid])/d);
    }
    if(flag==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
