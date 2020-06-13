#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
bool leap(int y)
{
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}
int main()
{
    int y;
    cin>>y;
	bool is_leap = leap(y);
	int d = 0;
	do {
		d++;
		if (leap(y))
		    d++;
		y++;
		d %= 7;
	} while (d || leap(y) != is_leap);
	cout << y << endl;
}
