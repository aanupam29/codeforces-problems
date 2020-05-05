#include <bits/stdc++.h>
using namespace std;
#define lli            long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;

using pii = pair <int,int >;
int main(){
	int spaceship, base;
	scanf("%d%d",&spaceship,&base);
	
	vector<int> spc(spaceship);
	vector< pii > bse(base);
	
	for(int &x : spc)
		scanf("%d",&x);
	
	for(auto &x : bse){
		scanf("%d%d",&x.first,&x.second);
	}
	
	sort(bse.begin(),bse.end());
	
	vector<int> cum(base);
	
	for(int i= 0 ; i < base ; i++){
		if(i){
			cum[i] = cum[i-1] + bse[i].second;
		}
		else
			cum[i] = bse[i].second;
	}
	
	for(int i = 0 ; i < spaceship ; i++){
		
		int low = 0 , high = base-1;
		int ans = 0;
		while(low <= high){
			
			int mid = low + ( (high- low) >> 1);
			
			if(bse[mid].first <= spc[i]){
				ans = cum[mid];
				low = mid + 1;
			}
			else
				high = mid - 1;
			
		}
		printf("%d ",ans);
	}
	puts("");
	return 0;
}
