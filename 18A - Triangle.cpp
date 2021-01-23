#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> a;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
bool ok(pair <int, int> x, pair <int, int> y, pair <int, int> z)
{
    int a = (y.second - x.second) * (y.second - x.second) + (y.first - x.first) * (y.first - x.first);
    int b = (y.second - z.second) * (y.second - z.second) + (y.first - z.first) * (y.first - z.first);
    int c = (z.second - x.second) * (z.second - x.second) + (z.first - x.first) * (z.first - x.first);
    return (a != 0 && b != 0 && c != 0) && ((a + b == c) || (a + c == b) || (b + c == a));
}
int main()
{
    for(int i = 0; i < 3; i++)
    {
        int x, y;
        cin>>x>>y;
        a.push_back({x, y});
    }
    if(ok(a[0], a[1], a[2]))
    {
        cout<<"RIGHT";
        return 0;
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            a[i].first += dx[j];
            a[i].second += dy[j];
            if(ok(a[0], a[1], a[2]))
            {
                cout<<"ALMOST";
                return 0;
            }
            a[i].first -= dx[j];
            a[i].second -= dy[j];
        }
    }
    cout<<"NEITHER";
    return 0;
}
