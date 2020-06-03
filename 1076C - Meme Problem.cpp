#include<bits/stdc++.h>
using namespace std;
typedef long long li;
typedef double ld;
typedef pair<int, int> pt;
li d;
void solve()
{
    cin>>d;
	if(d == 0) 
	{
		cout << "Y " << 0.0 << " " << 0.0 << endl;
		return;
	}
	if(d < 4)
	{
		cout << "N" << endl;
		return;
	}
	ld D = sqrt(d * li(d - 4));
	ld a = (d + D) / 2.0;
	ld b = (d - D) / 2.0;
	cout << "Y " << a << " " << b << endl;
}
int main() 
{
	cout << fixed << setprecision(9);
	int tc;
	cin>>tc;
	while(tc--) 
	{
		solve();
    }
	return 0;
}
