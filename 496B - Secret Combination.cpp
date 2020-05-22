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

#define loop(i, n) for(i=0; i<(n); i++)
#define MAX 100
int n;
string s, s1,  minS;
bool mini(string s1, string s2)
{
    int i;
    int check = false;
    loop(i, n)
    {
        if(s1[i]==s2[i]) continue;
        else if(s1[i]>s2[i])
        {
            check = true;
            break;
        }
        else
        {
            check = false;
            break;
        }
    }
    return check;
}
void addOne()
{
    int i;
    loop(i, n)
    {
        if(s1[i]=='9')
            s1[i] = '0';
        else
            s1[i]++;
    }
}
void rightShift()
{
    s = s.substr(n-1,1)+ s.substr(0,n-1);
}
int main()
{
    int i, j;
    cin >> n;
    cin >> s;
    minS = s;
    loop(i, n)
    {
       s1 = s;
       loop(j, 9)
       {
            addOne();
            if(mini(minS, s1))
                minS = s1;
       }
       rightShift();
       if(mini(minS, s))
            minS = s;
    }
    cout << minS << endl;
    return 0;
}
