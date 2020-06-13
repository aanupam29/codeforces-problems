#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
int h1, h2;
int a, b;
int main()
{
    cin>>h1>>h2>>a>>b;
    if (h1 + 8 * a >= h2)
	{
		puts("0");
	}
	else if (a > b) 
	{
		int num = h2 - h1 - 8 * a, den = 12 * (a - b);
		cout << (num + den - 1) / den << endl;
	}
	else
	{
		puts("-1");
	}
}
