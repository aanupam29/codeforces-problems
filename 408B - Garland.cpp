#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string a, b;
    int res = 0;
    cin>>a>>b;
    map<char, int> cnt,cnt1;
    for(auto el : a) 
    {
        cnt[el]++;
    }
    for(auto el : b)
    {
        cnt1[el]++;
    }
    for(auto el : cnt1) 
    {
        if (cnt[el.first] == 0) 
        {
            res = 0;
            break;
        }
        res += min(el.second, cnt[el.first]);
    }
    if (!res)
    {
        cout<<"-1";
    }
    else
    {
        cout<<res;
    }
    return 0;
}
