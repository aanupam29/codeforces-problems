#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, t;
    cin >> n >> s >> t;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        vec[i]--;
    }
    s--;
    t--;
    if (s == t)
    {
        cout << 0;
        return 0;
    }
    int pos = s;
    int steps = 0;
    bool done = false;
    while (steps <= n)
    {
        pos = vec[pos];
        steps++;
        if (pos == t)
        {
            done = true;
            break;
        }
    }
    if (!done)
    {
        cout << -1;
        return 0;
    }
    cout << steps;
}
