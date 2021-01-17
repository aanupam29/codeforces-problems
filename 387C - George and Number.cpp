#include <bits/stdc++.h>
using namespace std;
int t,n,m,k;
string s;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    cin>>s;
    int len=s.size();
    int ans=0,j;
    for(int i=0;i<len;)
    {
        for(j=i+1;j<=len;++j)
        {
            if(j>2*i) 
                ans=0;
            else if(j==2*i && s[i]>s[0]) 
                ans=0;
            if(s[j] != '0')
                break;
        }
        i=j;
        ans++;
    }
    cout<<ans;
    return 0;
}
