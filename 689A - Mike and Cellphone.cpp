#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
const int MYDD=1103;
int main() 
{
	int n,num[MYDD];
	char dd[MYDD];
	while(scanf("%d",&n)!=EOF) 
	{
		scanf("%s",dd);
		memset(num,0,sizeof(num));
		for(int j=0; j<n; j++)
			num[dd[j]-'0']++;
		bool a,s,d,f;
		a=s=d=f=false;
		if(num[1]||num[4]||num[7]||num[0])
			a=true;
		if(num[1]||num[2]||num[3])
			s=true;
		if(num[3]||num[6]||num[9]||num[0])
			d=true;
		if(num[7]||num[0]||num[9])
			f=true;
		if(a&&s&&d&&f)	
		    puts("YES");
		else		
		    puts("NO");
	}
	return 0;
}
