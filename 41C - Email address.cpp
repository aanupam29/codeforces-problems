#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string k="";
    int ok=0;
    for(int i=0;i<s.size();)
    {
        if(i==0 || i==s.size()-1)
        {
            k += s[i];
            i++;
        }
        else if(i<s.size()-3 && s[i]=='d' && s[i+1]=='o' && s[i+2]=='t')
        {
            k += '.';
            i += 3;
        }
        else if(ok==0 && s[i]=='a' && s[i+1]=='t' && i<s.size()-2)
        {
            k += '@';
            ok = 1;
            i += 2;
        }
        else
        {
            k += s[i];
            i++;
        }
    }
    cout<<k;
}
int main()
{
    solve();
    return 0;
}
