#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
	int i, j, k;
    int n, m, q;
    string s;
    cin>>n;
    cin >> s;
    set<int> ss;
    map<char, int> mp;
    for(i = 0; i < n; i++)
    {
        ss.insert(s[i]);
    }
    int l = 0, r = 0;
    int ans = n;
    int sz = ss.size();
    int tot = 0;
    while(l <= r)
    {
        if(tot == sz)
        {
            ans = min(ans, r - l);
            mp[s[l]]--;
            if(!mp[s[l]])
            {
                tot--;
            }
            l++;
        }
        else if(r < n)
        {
            if(!mp[s[r]])
            {
                tot++;
            }
            mp[s[r]]++;
            r++;
        }
        else
        {
            break;
        }
    }
    cout<<ans;
	return 0;
}
