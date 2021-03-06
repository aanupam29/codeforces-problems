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
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define co(n)          cout<<n;
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   
#define forn(i, n)     ff(i, 0, n)
#define sz(v)          int((v).size())

int main()
{
    int n;
    string command, parameter;
    vector<string> path;
    cin >> n;
    while (n--)
    {
        cin >> command;
        if (command.compare("pwd") == 0)
        {
            cout << "/";
            for (size_t i = 0; i < path.size(); ++i)
            {
                cout << path[i] << "/";
            }
            cout << endl;
        }
        else
        {
            cin >> parameter;
            size_t pos = 0;
            if (parameter[0] == '/')
            {
                path.clear();
                pos = 1;
            }
            while (true)
            {
                size_t next_pos = parameter.find('/', pos);
                if (next_pos != string::npos)
                {
                    string dir = parameter.substr(pos, next_pos - pos);
                    if (dir.compare("..") != 0)
                    {
                        path.push_back(dir);
                    }
                    else
                    {
                        if (!path.empty())
                        {
                            path.pop_back();
                        }
                    }
                    pos = next_pos + 1;
                }
                else
                {
                    string dir = parameter.substr(pos, string::npos);
                    if (dir.compare("..") != 0)
                    {
                        path.push_back(dir);
                    }
                    else
                    {
                        if (!path.empty())
                        {
                            path.pop_back();
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
