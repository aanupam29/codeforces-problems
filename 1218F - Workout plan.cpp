#include <bits/stdc++.h>
using namespace std;
#define Up(i,a,b) for(int i = a; i <= b; i++)
#define ms(a,x) memset(a,x,sizeof(a))
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n,k;
    cin >> n >> k;
    int w[n+1];
    ms(w,0);
    Up(i,1,n)
    {
        cin >> w[i];
    }
    int a;
    cin >> a;
    int c[n+1];
    Up(i,1,n)
    ms(c,0);
    Up(i,1,n)
    {
        cin >> c[i];
    }
    ll sum = 0;
    priority_queue<int,vector<int>,greater<int> > pq;   
    Up(i,1,n)
    {
        pq.push(c[i]);
        while(k < w[i])
        {
            if(pq.empty())
            {
                cout << -1 << endl;
                return 0;
            }
            sum += pq.top();
            pq.pop();
            k += a;
        }
    }
    cout << sum << endl;
    return 0;
}
