#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tt;
    cin >> tt;
    while (tt--) 
    {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        if (p == 0)
        {
          cout << (x == 0 ? 0 : -1) << endl;
          continue;
        }
        if (p == q)
        {
          cout << (x == y ? 0 : -1) << endl;
          continue;
        }
        int t1 = (x + p - 1) / p;
        int t2 = ((y - x) + (q - p) - 1) / (q - p);
        cout << (q * 1LL * max(t1, t2) - y) << endl;
    }
    return 0;
}
