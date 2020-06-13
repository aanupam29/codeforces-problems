#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
#define pp pair<ll,string>
using namespace std;
operator<(pp a, pp b)
{
    return a.first>b.first;
}
int main()
{
        ll i,j,k;
        ll n,m,r,p;
        string nam;
        cin>>n>>m;
        priority_queue<pp> pq[m];
        for(i=0;i<n;i++)
        {
            cin>>nam>>r>>p;
            pq[r-1].push(make_pair(p,nam));
        }
        pp a,b,c;
        for(i=0;i<m;i++)
        {
            a=pq[i].top();pq[i].pop();
            b=pq[i].top();pq[i].pop();
            c=pq[i].top();
            if(b.first==c.first && pq[i].empty()==false)
            {
                cout<<"?"<<endl;
            }
            else
            {
                cout<<a.second<<" "<<b.second<<endl;
            }
        }
        return 0;
}
