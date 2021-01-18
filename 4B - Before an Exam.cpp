#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sumTime,sum1=0,sum2=0,c;
    cin>>d>>sumTime;
    int minTime[d],maxTime[d];
    for(int i=0;i<d;i++)
    {
        cin>>minTime[i]>>maxTime[i];
        sum1+=minTime[i];
        sum2+=maxTime[i];
    }
    if(sum2<sumTime || sum1>sumTime)
    {
        cout<<"NO";
    }
    else 
    {
        cout<<"YES"<<endl;
        for(int a=0;a<d;a++)
        {
	        c=min(maxTime[a],sumTime-sum1+minTime[a]);
            cout<<c<<" ";
            sumTime=sumTime-c;
            sum1=sum1-minTime[a];
        }
    }
}
