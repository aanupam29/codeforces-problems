#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
  int n, m;
  cin >> n >> m;
  int a[n], b[m];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < m; i++)
    cin >> b[i];
  int count = 0;
  sort(a, a + n);
  sort(b, b + m);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i] == b[j])
      {
        count++;
        b[j] = 0;
        break;
      }
      if (b[j] > a[i])
      {
        count++;
        b[j] = 0;
        break;
      }
    }
  }
  cout << n - count << endl;
  return 0;
}
