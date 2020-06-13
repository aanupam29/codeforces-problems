#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int NO_X = 2e9;
const string REMOVE = "removeMin";
const string GET = "getMin";
const string INSERT = "insert";
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<string, int> > ans;
    priority_queue<int> q;
    for (int i = 0; i < n; i++) 
    {
        string s;
        cin >> s;
        if (s == INSERT)
        {
            int x;
            cin >> x;
            q.push(-x);
            ans.push_back(make_pair(s, x));
        } 
        else if (s == GET) 
        {
            int x;
            cin >> x;
            while (!q.empty() && -q.top() < x)
            {
                q.pop();
                ans.push_back(make_pair(REMOVE, NO_X));
            }
            if (q.empty() || -q.top() > x) 
            {
                q.push(-x);
                ans.push_back(make_pair(INSERT, x));
            }
            ans.push_back(make_pair(s, x));
        } 
        else
        {
            if (q.empty())
            {
                ans.push_back(make_pair(INSERT, 0));
            } 
            else
            {
                q.pop();
            }
            ans.push_back(make_pair(s, NO_X));
        }
    }
    cout << ans.size() << "\n";
    for (auto& p : ans) 
    {
        cout << p.first;
        if (p.second != NO_X)
        {
            cout << " " << p.second;
        }
        cout << "\n";
    }
    return 0;
}
