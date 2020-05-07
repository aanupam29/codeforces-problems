#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define ll long long
using namespace std;

int main()
{
    int n; cin >> n;
    int x[n+1],y[n+1],z=1; 
    FOR(i,0,n) 
        cin >> x[i+1] >> y[i+1];
    if(n==3) 
    {  
        cout << "1 2 3"; 
        return 0;
    }
    FOR(i,0,n)
    {
        cout << z << " ";
        if(x[x[z]]==y[z] || y[x[z]]==y[z]) 
            z=x[z];
        else 
            z=y[z];
    }
    return 0;
}
