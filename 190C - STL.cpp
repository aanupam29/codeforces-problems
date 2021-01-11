#include<iostream>
#include<cstdio>
using namespace std;
string s="",c;
bool flag=1;
void init()
{
	if(cin>>c)
	{
		if(c=="pair")
		{
			s+="pair<";
			init();
			s+=",";
			init();
			s+=">";
		}
		else
		{
			s+="int";
		}
	}
	else
	{
		flag=0;
	}
 }
int main()
{
	int n;
	cin>>n;
	init();
	if(!flag)
	{
		cout<<"Error occurred";
		return 0;
	}
	getline(cin,c);
	if (c.size()) 
	{
		cout<<"Error occurred";
		return 0;
	}
	cout<<s;
	return 0;
}
