#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void solve() 
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    while(t--) 
    {
        for(int i = 0; i < n - 1; i++) 
        {
            if(str[i] == 'B' && str[i + 1] == 'G') 
            {
                str[i] = 'G';
                str[i + 1] = 'B';
                i += 1;
            }
        }
    }
    cout<<str;
}
int32_t main() 
{
    IOS;
    solve();
}
