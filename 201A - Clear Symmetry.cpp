#include<bits/stdc++.h>
using namespace std;

int x;
int a[]={1,5,13,25,41,61,85,113};
int b[]={1,3,5,7,9,11,13,15};
int main()
{   cin>>x;
    int p=0;
    if(x==3)
    { 
        cout<<"5"<<endl; 
        return 0; 
        
    }
    while(a[p]<x) 
        p++;
    cout<<b[p];
}
