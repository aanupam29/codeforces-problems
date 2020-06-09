#include <bits/stdc++.h>
using namespace std;
const int maxN = 2e5 + 10;
#define FORU(i, l, r) for (int i = l; i <= r; ++i)
#define FORD(i, r, l) for (int i = r; i >= l; --i)
#define REPU(i, r) for (int i = 0; i < r; ++i)
#define LL long long
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define PINT pair < int, int >
#define BIT(x, i) ((x >> i) & 1)
#define NUM_SET_BIT __builtin_popcountll
int a[maxN], c[maxN], n;
PINT b[maxN];
int main() 
{
    cin >> n;
    FORU(i, 1, n) scanf("%d", &a[i]);
    FORU(i, 1, n) scanf("%d", &b[i].F), b[i].S = i;
    sort(b + 1, b + n + 1);
    sort(a + 1, a + n + 1);
    FORU(i, 1, n) c[b[n - i + 1].S] = a[i];
    FORU(i, 1, n) printf("%d ", c[i]);
}
