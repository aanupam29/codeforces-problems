#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m,k;
int main()
{
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {
        m -= n;
        ll l = 0;
        ll r = m;
        ll ls = k - 1;
        ll rs = n - k;
        ll ans = 0;
        while(l <= r)
        {
            ll mid = (l + r) / 2;
            ll sum = mid;
            if(mid >= ls)
            {
                sum += (mid * 2 - ls - 1) * ls / 2;
            }
            else
            {
                sum += (mid - 1) * mid / 2;
            }
            if(sum > m)
            {
                r = mid - 1;
                continue;
            }
            if(mid >= rs)
            {
                sum += (mid * 2 - rs - 1) * rs / 2;
            }
            else 
            {
                sum += (mid - 1) * mid / 2;
            }
            if(sum > m)
                r = mid - 1;
            else if(sum < m)
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                ans = mid + 1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
