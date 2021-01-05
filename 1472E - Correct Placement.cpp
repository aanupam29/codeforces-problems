#include <bits/stdc++.h>
using namespace std;

#define int long long

void output()
{
    int n,i,temp;
    cin>>n;
    vector<pair<pair<int, int>, int> >a;
    vector<pair<pair<int, int>, int> >::iterator it;
    for(i=0; i<n; i++)
    {
        int h, w;
        cin>>h>>w;
        a.push_back( { {w, -h}, i} );
        a.push_back( { {h, -w}, i} );

    }
    sort(a.begin(), a.end());
    vector<int>ans(n, -2);
    int minHeight = 1e9+5;
    int elem = -1;

    for(it=a.begin(); it!=a.end(); it++)
    {
        int w = it->first.first;
        int h = -it->first.second;
        int id = it->second;

        if(h > minHeight)
        {
            ans[id] = elem;
        }
        else if(h < minHeight)
        {
            minHeight = h;
            elem = id;
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<ans[i]+1<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        output();
    }
    return 0;
}
