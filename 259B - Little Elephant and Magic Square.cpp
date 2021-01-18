#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    while(t--)
    {
        int a[3][3],r[3]={0};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
                r[i] += a[i][j];
            }
        }
        a[0][0] = (r[2]+r[1]-r[0])/2;
        a[1][1] = (r[0]+r[2]-r[1])/2;
        a[2][2] = (r[1]+r[0]-r[2])/2;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
