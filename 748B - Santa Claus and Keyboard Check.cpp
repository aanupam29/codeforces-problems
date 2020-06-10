#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s,t;
    cin>>s>>t;
    map<char,char>m;
    vector<pair<char,char>>v;
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]] || m[t[i]])
        {
            if(!(m[s[i]]==t[i] && m[t[i]]==s[i]))
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else
        {
            m[s[i]]=t[i];
            m[t[i]]=s[i];
            if(s[i]!=t[i])
                v.push_back({s[i],t[i]});
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    return 0;
}
