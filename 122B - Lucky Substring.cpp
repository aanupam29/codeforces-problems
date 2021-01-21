#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin>>s;
    long long len = s.length(),sum1=0,sum2=0;
    for(int i = 0; i<len; i++) 
    {
        if(s[i] == '4')
            sum1++;
        if(s[i] == '7') 
            sum2++;
    }
    if(!sum1 && !sum2)
    {
        cout<<"-1";
    }
    else 
    {
        if(sum1 >= sum2) 
            cout<<"4";
        else
            cout<<"7";
    }
}
