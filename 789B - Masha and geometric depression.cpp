#include <bits/stdc++.h>
using namespace std;
#define ll  long long
using namespace std;

int main()
{
    ll b, q, l, m; cin >> b >> q >> l >> m;
    set<ll> S;
    for (int i = 0; i < m; i++)
    {
        ll x; cin >> x;
        S.insert(x);
    }
    if (abs(b) > l) 
    {
        cout << "0\n";
        exit(0);
    }
    if (q == -1)
    {
        if (S.count(b) && S.count(-b)) 
        {
            cout << "0\n";
        } 
        else 
        {
            cout << "inf\n";
        }
        exit(0);
    }
    if (q == 0)
    {
        if (S.count(b) && S.count(0))
        {
            cout << "0\n";
        }
        else
        {
            if (S.count(0)) 
            {
                cout << "1\n";
            }
            else 
            {
                cout << "inf\n";
            }
        }
        exit(0);
    }
    if (q == 1)
    {
        if (S.count(b))
        {
            cout << "0\n";
        } 
        else 
        {
            cout << "inf\n";
        }
        exit(0);
    }
    if (b == 0) 
    {
        if (S.count(0))
        {
            cout << "0\n";
        }
        else
        {
            cout << "inf\n";
        }
        exit(0);
    }
    int res = 0;
    while (abs(b) <= l) 
    {
        if (!S.count(b))
        {
            res++;
        }
        b *= q;
    }
    cout<<res;
    return 0;
}
