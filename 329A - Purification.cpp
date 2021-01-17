#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<ll, ll>
int main()
{
    ll t = 1;
    while (t--)
    {
        ll n;
        cin >> n;
        char v[n][n];
        vector<pii> ans1, ans2;
        ll cnt = 0;
        ll i, j, k;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> v[i][j];
        for (i = 0; i < n; i++)
        {
            ll k1, k2;
            k1 = k2 = 0;
            for (j = 0; j < n; j++)
            {
                if (v[i][j] == '.' && k1 == 0)
                {
                    ans1.push_back({i + 1, j + 1});
                    k1 = 1;
                }
                if (v[j][i] == '.' && k2 == 0)
                {
                    ans2.push_back({j + 1, i + 1});
                    k2 = 1;
                }
            }
        }
        if (ans1.size() == n)
        {
            for (auto x : ans1)
                cout << x.first << " " << x.second << endl;
            return 0;
        }
        else if (ans2.size() == n)
        {
            for (auto x : ans2)
                cout << x.first << " " << x.second << endl;
            return 0;
        }
        cout << -1 << endl;
    }
}
