#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n")
#define N 10000100
#define inf 1e9

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d",n)
#define pff(n,m) printf("%d %d",n,m)
#define pffl(n,m) printf("%I64d %I64d",n,m)
#define pfl(n) printf("%I64d",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int, int>

using namespace std;

int main()
{

    int i, j;
    int n, m, t;
    int x, y, q, r;
    ll k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin >> s;
        if(n == 1)
        {
            cout << s << endl;
            continue;
        }
        string ans;
        ll count = 0;
        bool flag = false;
        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                
                count++;
            }
            else
            {
                if(k >= count)
                {
                    ans.pb('0');
                    k -= count;
                }
                else
                {
                    x = count - k;
                    while(x--)
                    {
                        ans.pb('1');
                    }
                    ans.pb('0');
                    while(k--)
                    {
                        ans.pb('1');
                    }
                    for(j = i + 1; j < n; j++)
                    {
                        ans.pb(s[j]);
                    }
                    flag = true;
                    break;
                }
            }
            if(flag)
                break;
            else if(i == n - 1 && count)
            {
                while(count--)
                    ans.pb('1');
            }
        }
        cout << ans << endl;
    }
    return 0;
}
