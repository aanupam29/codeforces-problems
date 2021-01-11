#include<bits/stdc++.h>
#define N 1010
#define For(i,x,y) for (i=x;i<=y;i++)
using namespace std;
int i,j,k,n,m;
int in[N],a[N],b[N];
int main() {
	cin>>n>>m;
	For(i,1,m) 
  {
		int x,y,z;
		cin>>x>>y>>z;
		a[x]=y,b[x]=z;
		in[y]++;
	}
	int s=0;
	For(i,1,n) 
    if(!in[i] && a[i])
      s++;
	printf("%d\n",s);
	For(i,1,n) 
    if (!in[i]&&a[i])
    {
      int mi=1e7;
      for (k=i;a[k];k=a[k]) mi=min(mi,b[k]);
      printf("%d %d %d\n",i,k,mi);
	  }
	  return 0;
}
