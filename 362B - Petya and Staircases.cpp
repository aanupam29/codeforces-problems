#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long d[m];
        for(int i=0;i<m;i++)
        {
            cin>>d[i];
        }
        sort(d,d+m);
        if(d[0]==1 || d[m-1]==n)
        {
            cout<<"NO";
            return 0;
        }
        for(int i=1;i<m-1;i++)
        {
            if(d[i+1]-d[i]==1 && d[i]-d[i-1]==1)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
}
