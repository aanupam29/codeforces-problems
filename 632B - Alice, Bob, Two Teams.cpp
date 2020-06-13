#include <bits/stdc++.h>
using namespace std;
long long p[500005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>p[i];
    string s;
    cin>>s;
    long long pa = 0,pb = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
            pa += p[i];
        else 
            pb += p[i];
    }
    long long mx = pb;
    long long tpb = pb;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
            tpb += p[i];
        else 
            tpb -= p[i];
        mx = max(mx,tpb);
    }  
    tpb = pb;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] == 'A') 
            tpb += p[i];
        else
            tpb -= p[i];
        mx = max(mx,tpb);
    }  
    cout<<mx;;
	return 0;
}
