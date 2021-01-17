#include <bits/stdc++.h>
using namespace std;
bool check(char ch)
{
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
bool comp(string s1, string s2)
{
    return (s1.compare(s2)==0);
}
string conv(int i)
{
    if(i==0)
    {
        return "aaaa";
    }
    if(i==1)    
    {
        return "aabb";
    }
    if(i==2)
    {
        return "abab";
    }
    if(i==3)    
    {
        return "abba";
    }
    if(i==4)
    {
        return "NO";
    }
}

void solve()
{
    int n, k;
    cin >> n>>k;
    int r=0, rh;
    for(int i=0;i<n;i++)
    {
        string s, temp="";
        vector<string> t;
        for(int j=0;j<4;j++)
        {
            cin >> s;
            int cnt=0;
            for(int l=s.length()-1;l>=0;l--)
            {
                cnt += check(s[l]);
                temp += s[l];
                if(cnt==k)
                {
                    break;
                }
            }
            if(cnt<k)
            {
                cout << "NO";
                return;
            }
            t.push_back(temp);
            temp="";
        }
        if(comp(t[0], t[1]) && comp(t[0], t[2]) && comp(t[0], t[3]))
        {
            rh=0;
        }
        else if(comp(t[0], t[1]) && comp(t[2], t[3]))
        {
            rh=1;
        }
        else if(comp(t[0], t[2]) && comp(t[1], t[3]))
        {
            rh=2;
        }
        else if(comp(t[0], t[3]) && comp(t[1], t[2]))
        {
            rh=3;
        }
        else
        {
            rh=4;
        }
        if(!r || !rh)
        {
            r=max(r, rh);
        }
        else if(r && r!=rh)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<conv(r);
}
int main() 
{ 
    solve();
}
