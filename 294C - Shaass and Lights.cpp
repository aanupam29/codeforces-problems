#include<bits/stdc++.h>
#define LL long long
#define M 1000000007
using namespace std;
LL n,m,nCr[1001][1001],ans=1,s[1001],pow[1001];
int main(){
    cin >> n >> m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) nCr[i][j]=1;
            else nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%M;
        }
    }
    pow[0]=1;pow[1]=1;
    for(int i=2;i<=n;i++) pow[i]=(pow[i-1]*2)%M;
    for(int i=0;i<m;i++) cin >> s[i];
    sort(s,s+m);
    LL cnt=0,tmp;
    for(int i=0;i<m;i++){
        if(i==0) tmp=s[i]-1;
        else{
            tmp=s[i]-s[i-1]-1;
            ans=(ans*pow[tmp])%M;
        }
        cnt+=tmp;
        ans=(ans*nCr[cnt][tmp])%M;
    }
    cnt+=n-s[m-1];
    ans=ans*nCr[cnt][n-s[m-1]]%M;
    cout << ans << endl;
    return 0;
}
