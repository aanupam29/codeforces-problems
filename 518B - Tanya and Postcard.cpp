#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
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
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main() 
{
    fast
    string s,t;
    cin>>s>>t;
    int smalls[26]={0},smallt[26]={0},bigs[26]={0},bigt[26]={0};
    ff(i,0,l(s)-1)
    {
        ('a'<=s[i]&&s[i]<='z') ? smalls[s[i]-'a']++ : bigs[s[i]-'A']++;
    }
    ff(i,0,l(t)-1)
    {
        ('a'<=t[i]&&t[i]<='z') ? smallt[t[i]-'a']++ : bigt[t[i]-'A']++;
    }
    int ans = 0;
    ff(i,0,25)
    {
        if(smalls[i] == smallt[i])
        {
            ans += smalls[i];
            smallt[i] = 0;
            smalls[i] = 0;
        }
        else if(smalls[i] > smallt[i])
        {
            ans += smallt[i];
            smalls[i] -= smallt[i];
            smallt[i]=0;
        }
        else
        {
            ans += smalls[i];
            smallt[i] -= smalls[i];
            smalls[i] = 0;
        }
    }
    ff(i,0,25)
    {
        if(bigs[i] == bigt[i])
        {
            ans += bigt[i];
            bigt[i] = 0;
            bigs[i] = 0;
        }
        else if(bigs[i] > bigt[i])
        {
            ans += bigt[i];
            bigs[i] -= bigt[i];
            bigt[i]=0;
        }
        else
        {
            ans += bigs[i];
            bigt[i] -= bigs[i];
            bigs[i] = 0;
        }
    }
    cout<<ans<<" ";
    ans = 0;
    ff(i,0,25)
    {
        if(smalls[i] != 0)
        {
            if(smalls[i] == bigt[i])
            {
                ans += smalls[i];
                smalls[i] = 0;
                bigt[i] = 0;
            }
            else if(smalls[i] <= bigt[i])
            {
                ans += smalls[i];
                bigt[i] -= smalls[i];
                smalls[i] = 0;
            }
            else
            {
                ans += bigt[i];
                smalls[i] -= bigt[i];
                bigt[i] = 0;
            }
        }
    }
    ff(i,0,25)
    {
        if(bigs[i] != 0)
        {
            if(smallt[i] == bigs[i])
            {
                ans += smallt[i];
                smallt[i] = 0;
                bigs[i] = 0;
            }
            else if(smallt[i] <= bigs[i])
            {
                ans += smallt[i];
                bigs[i] -= smallt[i];
                smallt[i] = 0;
            }
            else
            {
                ans += bigs[i];
                smallt[i] -= bigs[i];
                bigs[i] = 0;
            }
        }
    }
    cout<<ans;
	return 0;
}
