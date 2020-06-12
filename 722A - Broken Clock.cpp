#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 
int main()
{
    int a;
    string str;
    char h[3],m[3];
    cin>>a>>str;
    h[0] =str[0];
    h[1] =str[1];
    h[2] ='\0';
    m[0] =str[3];
    m[1] =str[4];
    m[2] ='\0';
    if(a==12)
    {
        if(atoi(h)>12)
        {
            if(str[1]=='0')
            {
                str[0]='1';
            }
            else
            {
                str[0]='0';
            }
        }
        else if(atoi(h)==0)
        {
            str[0]='1';
        }
        if(atoi(m)>59)
        {
            str[3]='0';
        }
    }
    else
    {
        if(atoi(h)>23)
        {
            str[0]='0';
        }
        if(atoi(m)>59)
        {
            str[3]='0';
        }
    }
    cout<<str;
    return 0;
}
