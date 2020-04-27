#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
#define ulli unsigned long long int
#define li long int 
#define ff(i,a,b) for(int i=a;i<=b;i++)
#define fb(i,b,a) for(int i=b;i>=a;i--)
#define w(t) while(--t >= 0)
#define l(s) s.length()
#define c(n) cin>>n;
#define fast ios_base::sync_with_stdio(false);
#define sa(a,n) sort(a,a+n)
#define sv(v) sort(v.begin(),v.end())
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define nl cout<<"\n"
#define minus cout<<"-1\n";
#define vi vector<int>
#define pb push_back
#define tc int t; cin>>t;
#define pp pair<int,int>

int main() {
    int k;
    cin>>k;
    int n;
    string s, t;
    while (k--) {
        cin>>n;
        cin>>s>>t;
        string concat = s+t;
        map<char, int> m;
        for(int i = 0; i < concat.length(); i++) {
            m[concat[i]]++;
        }
        bool no = false;
        for(int i = 0; i < concat.length(); i++) {
            if (m[concat[i]] % 2 == 1) {
                no = true;
                cout<<"No"<<endl;
                break;
            }
        }
        if (no) continue;
        vector<pair<int,int>> swaps;
        for (int i = 0; i < n; i++) {
            if (s[i] == t[i]) continue;
            for (int j = i+1; j < n; j++) {
                if (s[j] == s[i]) {
                    swap(s[j], t[i]);
                    swaps.push_back({j+1,i+1});
                    break;
                }
                if (s[i] == t[j]) {
                    swap(t[j], s[j]);
                    swap(s[j], t[i]);
                    swaps.push_back({j+1,j+1});
                    swaps.push_back({j+1,i+1});
                    break;
                }
            }
        }
        cout<<"Yes"<<endl;
        cout<<swaps.size()<<endl;
        for(int i = 0; i < swaps.size(); i++) {
            cout<<swaps[i].first<<" "<<swaps[i].second<<endl;
        }
    }
}
