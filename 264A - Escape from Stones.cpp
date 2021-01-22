#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
	cin>>a;
	for(int i=0;i<a.size();++i)
	{
	    if(a[i] == 'r')
		    cout<<i+1<<endl;
	}
	for(int i=a.size()-1;i>=0;--i)
	{
	    if(a[i] == 'l')
	        cout<<i+1<<endl; 
    }
    return 0;
}
