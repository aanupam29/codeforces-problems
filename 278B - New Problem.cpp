#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<ll,ll>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int n;
    char ch[30];
    bool exist1[26] = {false}, exist2[26][26] = {false};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", ch);
        for (int j = 0; j < strlen(ch); ++j)
        {
            exist1[ch[j]-'a'] = true;
        }
        for (int j = 1; j < strlen(ch); ++j)
        {
            exist2[ch[j-1]-'a'][ch[j]-'a'] = true;
        }
    }
    bool found = false;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (!exist1[c-'a'])
        {
            printf("%c\n", c);
            found = true;
            break;
        }
    }
    if (!found)
    {
        for (char c1 = 'a'; !found && c1 <= 'z'; ++c1)
        {
            for (char c2 = 'a'; c2 <= 'z'; ++c2)
            {
                if (!exist2[c1-'a'][c2-'a'])
                {
                    printf("%c%c\n", c1, c2);
                    found = true;
                    break;
                }
            }
        }
    }
    return 0;
}
