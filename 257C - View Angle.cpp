/* ****_hela**** */

#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;
#define N  100005
#define PI 3.14159265
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
    while(TESTS--)
    {
        ll n;
        cin>>n;
        vector<double>alpha(n);
        for(ll i=0;i<n;i++)
        {
            double x,y;
            cin>>x>>y;
            alpha[i]=(180*atan(abs(y/x)))/PI;
            if(x<0 && y>=0)alpha[i]=180-alpha[i];
            else if(x<0 && y<0)alpha[i]+=180;
            else if(x>=0 && y<0)alpha[i]=360-alpha[i];
            
        }
        sort(all(alpha));
        double theta=360-(alpha[n-1]-alpha[0]);
        for(ll i=1;i<n;i++){
            theta=max(theta,alpha[i]-alpha[i-1]);
        }
        cout<<setprecision(12)<<360-theta;
    }
    return 0;
}
