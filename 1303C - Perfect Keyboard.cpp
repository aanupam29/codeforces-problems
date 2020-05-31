#include <bits/stdc++.h>
using namespace std;
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); ++i)
void solve()
{
    string s;
    cin >> s;
    vector<bool> used(26);
    used[s[0] - 'a'] = true;
    string t(1, s[0]);
    int pos = 0;
    for (int i = 1; i < sz(s); i++) 
    {
        if (used[s[i] - 'a']) 
        {
            if (pos > 0 && t[pos - 1] == s[i]) 
            {
                pos--;
            } 
            else if (pos + 1 < sz(t) && t[pos + 1] == s[i]) 
            {
                pos++;
            } 
            else 
            {
                cout << "NO" << endl;
                return;
            }
        } 
        else 
        {
            if (pos == 0) 
            {
                t = s[i] + t;
            } 
            else if (pos == sz(t) - 1) 
            {
                t += s[i];
                pos++;
            } 
            else 
            {
                cout << "NO" << endl;
                return;
            }
        }
        used[s[i] - 'a'] = true;
    }
    forn(i, 26) 
        if (!used[i])
            t += char(i + 'a');
    cout << "YES" << endl << t << endl;
}
int main() 
{
    int tc;
    cin >> tc;
    forn(i, tc) 
        solve();
}
