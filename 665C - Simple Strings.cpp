#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int main()
{
    string s;
    cin >> s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]==s[i])
        {
            for(int ii=0;ii<=3;ii++)
            {
                if(s[i-1] != ii+'a' && s[i+1] != ii+'a')
                {
                    s[i]=ii+'a';
                    break;
                }
            }
        }
    }
    cout << s;
}
