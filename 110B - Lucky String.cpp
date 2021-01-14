#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;
    mp[1]="a";
    mp[2]="ab";
    mp[3]="abc";
    mp[0]="abcd";
    int num;
    cin>>num;
    string str;
    int count=num/4,digit=num%4;
    for(int i=0;i<count;i++)
    {
        str+=mp[0];
    }
    if(digit)
    {
        str+=mp[digit];
    }
    cout<<str;
}
