#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
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

int main() 
{
    fast
    int x,y;
    cin>>x>>y;
    int turn = 0,flag = 0;
    while(1)
    {
        if(turn % 2 == 0)
        {
            if(x >= 2)
            {
                if(y >= 2)
                {
                    x -= 2;
                    y -= 2;
                }
                else
                {
                    flag = 1;
                }
            }
            else if(x == 1)
            {
                if(y >= 12)
                {
                    y -= 12;
                    x = 0;
                }
                else
                {
                    flag = 1;
                }
            }
            else
            {
                if(y >= 22)
                {
                    y -= 22;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        else
        {
            if(y >= 22)
            {
                y -= 22;
            }
            else if(y >= 12 && x >= 1)
            {
                y -= 12;
                x -= 1;
            }
            else if(y >= 2 && x >= 2)
            {
                y -= 2;
                x -= 2;
            }
            else
            {
                flag = 1;
            }
        }
        if(turn%2==0 && flag==1)
        {
            cout<<"Hanako";
            return 0;
        }
        else if(turn%2==1 && flag==1)
        {
            cout<<"Ciel";
            return 0;
        }
        turn++;
    }
	return 0;
}
