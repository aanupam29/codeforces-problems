
#include<bits/stdc++.h>
using namespace std;
int n,sum,s[5000];
pair<int,int> v[5000];
vector<int> tmp;
int main()
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>v[i].first>>v[i].second;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<i;j++)
			if (v[j].first<v[i].second && v[i].first<v[j].second)
			{
			  s[i]++,s[j]++,sum++;
			}
	}
	for (int i=0;i<n;i++)
		if (s[i]==sum)
		  tmp.push_back(i);
	cout<<tmp.size()<<endl;
	for (auto t:tmp) 
    cout<<t+1<<' ';
}
