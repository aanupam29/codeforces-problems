#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<string> s;
    s.insert("VODKA");
    s.insert("WHISKEY");
    s.insert("WINE");
    s.insert("TEQUILA");
    s.insert("SAKE");
    s.insert("RUM");
    s.insert("GIN");
    s.insert("CHAMPAGNE");
    s.insert("BEER");
    s.insert("BRANDY");
    s.insert("ABSINTH");
    int cnt = 0;
    while(n--)
    {
        string str;
        cin>>str;
        if(!isalpha(str[0]))
        {
            if(stoi(str) < 18)
            {
                cnt++;
            }
        }
        else if(s.find(str) != s.end())
        {
            cnt++;   
        }
    }
    cout<<cnt;
    return 0;
}
