#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int x;
    string s;
    int pos= 0;
    while(n--)
    {
        cin>>x>>s;
        if(pos == 0)
        {
            if(s != "South")
            {
                cout<<"NO";
                return 0;
            }
            else
            {
                pos += x;
            }
        }
        else if(pos == 20000)
        {
            if(s != "North")
            {
                cout<<"NO";
                return 0;
            }
            else
            {
                pos -= x;
            }
        }
        else if(s == "South")
        {
            pos += x;
        }
        else if(s == "North")
        {
            pos -= x;
        }
        if(pos > 20000 || pos < 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(pos == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
