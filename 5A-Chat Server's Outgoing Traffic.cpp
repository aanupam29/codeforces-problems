#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    int count=0,ans=0,x,i;
    char ch;
    while(scanf("%c",&ch) != EOF)
    {
        getline(cin,s);
        if(ch == '+')
            count++;
        else if(ch == '-')
            count--;
        else
        {
            for(i=0 ; i<=s.length() ; i++)
            {
                if(s[i] == ':')
                {
                    break;
                }
            }
            ans += (s.length()-i-1)*count;
        }
    }
    cout<<ans;
    return 0; 
}
