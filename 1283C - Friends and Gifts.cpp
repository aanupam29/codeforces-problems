#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define apnt(arr, num) for(ll i = 0; i < num; i++) cout << arr[i] << (i + 1 < num ? ' ' : '\n');

#define mx 200005
#define mod 1000000007
#define PI acos(-1.0)
#define eps 1e-7

#define size1 200005

#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define mem(name, value) memset(name, value, sizeof(name))

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define case cout << "Case " << t++ << ": ";
typedef vector <ll> vll;
typedef set <ll> sll;
typedef queue <ll> qll;
typedef map <ll, ll> mll;
typedef pair <ll, ll> pll;
typedef vector <pair <ll , ll> > vpll;
inline bool cmp(pll a,pll b){ if(a.ff == b.ff)return a.ss < b.ss; return a.ff > b.ff; }
int main() 
{
    ll n, m, num, tc, t = 1;
    sc1(num);
    ll arr[num + 5];
    sll st;
    for (ll i = 1; i <= num; ++i) 
    {
        st.insert(i);
    }
    for (ll i = 1; i <= num; ++i) 
    {
        sc1(arr[i]);
        if(st.find(arr[i]) != st.end())
            st.erase(arr[i]);
    }
    vll temp(st.begin(), st.end());
    ll pos = 0;
    for (ll i = 1; i <= num; i++) 
    {
        if(arr[i] == 0) 
        {
            if(temp[pos] == i) 
            {
                if(pos == 0) swap(temp[pos], temp[pos + 1]);
                else swap(temp[pos], temp[pos - 1]);
            }
            pos++;
        }
    }
    pos = 0;
    for (ll i = 1; i <= num; i++) 
    {
        if(arr[i] == 0) 
            cout << temp[pos++] << " ";
        else 
            cout << arr[i] << " ";
    }
}
