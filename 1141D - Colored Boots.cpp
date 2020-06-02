#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"Possible\n"
#define cn             cout<<"Impossible\n"
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

int main()
{
	fast;
	int n;
	int A = 26;
    cin >> n;
    string l;
    cin >> l;
    vector<vi> left(A);
    vi wl;
    ff(i,0,n)
    {
        if (l[i] != '?')
        {
            left[l[i] - 'a'].pb(i);
        }
        else
        {
            wl.pb(i);
        }
    }
    string r;
    cin >> r;
    vector<vi> right(A);
    vi wr;
    ff(i,0,n)
    {
        if (r[i] != '?')
        {
            right[r[i] - 'a'].pb(i);
        }
        else
        {
            wr.pb(i);
        }
    }
    vector<pp> p;
    vi cl(A), cr(A);
    ff(i,0,A) 
    {
        ff(j,0,min(left[i].size(), right[i].size()))
        {
            p.pb({left[i][j] + 1, right[i][j] + 1});
        }
        cl[i] = cr[i] = min(left[i].size(), right[i].size());
    }
    ff(i,0,A)
    {
        while (cl[i] < left[i].size() && !wr.empty()) 
        {
            p.pb({left[i][cl[i]] + 1, wr[wr.size() - 1] + 1});
            cl[i]++;
            wr.pop_back();
        }
    }
    ff(i,0,A)
    {
        while (cr[i] < right[i].size() && !wl.empty()) 
        {
            p.pb({wl[wl.size() - 1] + 1, right[i][cr[i]] + 1});
            wl.pop_back();
            cr[i]++;
        }
    }
    ff(j,0,min(wl.size(), wr.size()))
    {
        p.pb({wl[j] + 1, wr[j] + 1});
    }
    cout << p.size() << endl;
    for (auto ans: p)
    {
        cout<<ans.first<<" "<<ans.second;
        nl;
    }
	return 0;
}
