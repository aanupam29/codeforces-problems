#include <bits/stdc++.h>
using namespace std;
#define LL             long long int 
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
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int solveFaster(LL n, LL k, LL d1, LL d2)
{
    if (n % 3 != 0) 
    {
        return 0;
    }
    for (int sign1 = -1; sign1 <= 1; sign1++) 
    {
        for (int sign2 = -1; sign2 <= 1; sign2++)
        {
            if (sign1 == 0 || sign2 == 0) 
            {
                continue;
            }
            LL D1 = d1 * sign1;
            LL D2 = d2 * sign2;
            LL x2 = (k - D1 + D2) / 3;
            if ((k - D1 + D2) % 3 != 0)
            {
                continue;
            }
            if (x2 >= 0 && x2 <= k)
            {
                LL x1 = D1 + x2;
                LL x3 = x2 - D2;
                if (x1 >= 0 && x1 <= k && x3 >= 0 && x3 <= k) 
                {
                    if (x1 <= n / 3 && x2 <= n / 3 && x3 <= n / 3) 
                    {
                        assert(abs(x1 - x2) == d1);
                        assert(abs(x2 - x3) == d2);
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
int main() 
{
	int T;
	cin >> T;
	while (T--) 
	{
		LL n, k, d1, d2;
		cin >> n >> k >> d1 >> d2;
		int ans = solveFaster(n, k, d1, d2);
		if (ans == 1)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no" << endl;
		}
	}
    return 0;
}
