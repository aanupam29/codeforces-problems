#include<bits/stdc++.h>
#define ll long long int
#define fe first
#define se second
#define pb push_back
#define mp make_pair
#define inf INT_MAX
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define msi multiset<int>
#define fr0(i,a,b) for(int i=a;i<b;i++)
#define fr1(i,a,b) for(int i=a;i<=b;i++)
#define frn0(i,a,b) for(int i=b-1;i>=a;i--)
#define frn1(i,a,b) for(int i=b;i>a;i--)
using namespace std;
const int asize= 100005;
const int  mod = 1000000007;
long long int mx=-inf;
long long int mi=inf;
string s;
int m,f;
int arr[13],brr[1005];
void dfs(int x,int y,int n){
	for(int i = 1 ; i <= 10 ; i++) {
		if(arr[i] == 1 && i > x && i != y && f == 0) {
			brr[n] = i;
			if(n == m-1) {
				f = 1;
				return;
			}
			dfs(i-x, i, n+1);
		}
	}
}
int main(){
	cin>>s;
	cin>>m;
	f=0;
	fr1(i,1,s.length()){
		arr[i]=s[i-1]-48;
	}
	dfs(0,0,0);
	if(f==0)cout<<"NO\n";
	else {
		cout<<"YES\n";
		fr0(i,0,m){
			cout<<brr[i]<<" ";
		}
	}
	return 0;
}
