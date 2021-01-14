#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int> > vec(n);
    vector<pair<int,int> > ans(n,make_pair(0,0));
    int count[100001]={0};

    for(int i=0;i<n;i++)
    {
        cin >> vec[i].first;
        cin >> vec[i].second;
        count[vec[i].first]++;
    }
    for(int i=0;i<n;i++)
    {
        ans[i].first=n-1;
        ans[i].first+=count[vec[i].second];
        ans[i].second = 2*(n-1)-ans[i].first;
    }
    for(int i=0;i<n;i++)
    {
        cout << ans[i].first << " "<<ans[i].second << endl;
    }
}
