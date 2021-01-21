#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	cin>>n;
	int cnt=0;
	if(n[0]=='-')
	{
    	n.erase(0,1);
    	cnt++;
	}
	string s="";
	for(int i=0;i<n.length();)
	{
		if(n[i]!='.')
	    {
	        s+=n[i];
		}
		else
		{
			break;
		}
		n.erase(0,1);
	}
	if(n.length()>3)
	{
	    n.erase(3);
	}
	else
	{
		if(n.length()==0)
		    n = ".00";
		else if(n.length()==1)
		    n += "00";
		else if(n.length()==2)
		    n += "0";
	}
    for(int i=s.length()-3;i>0;i-=3)
        s.insert(i,",");
    if(cnt==1)
        cout<<"($"<<s<<n<<")";
    else
        cout<<"$"<<s<<n;
}
