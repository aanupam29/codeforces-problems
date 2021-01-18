#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int i,n,m,a,b,c,d,p[120]={0},t[120]={0},sum=0;
    cin>>n>>m;
    for(i=0;i<120;i++)
	{
		t[i] = 1000000000;
	}
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c>>d;
        for(int j=a;j<=b;j++)
        {
            if(t[j] > c)
            {
                t[j] = c;
                p[j] = d;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        sum += p[i];
    }
    cout<<sum;
}
