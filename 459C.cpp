#include<bits/stdc++.h>
#define ll long long
#define fori(a1,b1) for(ll i=a1;i<b1;i++)
#define forj(a2,b2) for(ll j=a2;j<b2;j++)
// #define fork(a3,b3) for(ll k=a3;k<b3;k++)
using  namespace std;
vector<vector<int>> a;int n,k,d,total=0;
ll powerWithPrecaution(ll a,ll n)
{
    ll num=a;
    if(a==1)return 1;  
    fori(1,n)
    {
        a*=num;
        if(a>1e10)return (ll)1.5e10;
    }
    return a;

}
void per(vector<int> arr,int x)
{
    arr.push_back(x);
    if(total<=n)
    {
        if(arr.size()==d)
        {
            a.push_back(arr);
            total++;
        }
        else if(arr.size()<d)
        {
            fori(0,k)per(arr,i+1);
        }
    }
}
void sol()
{
    vector<int> arr;
    k=min(k,1000);
    if(d>1)k=min(10,k);
    fori(1,k+1)per(arr,i);
    // cout<<endl<<"size: "<<a.size()<<endl;
    fori(0,d)
    {
        forj(0,n)cout<<a[j][i]<<" ";
        cout<<"\n";
    }
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>k>>d;
    if(n>powerWithPrecaution(k,d))cout<<"-1\n";
    else
    {
        sol();
        
    }
    
    return 0;
}
