#include <bits/stdc++.h>
#define EPS 0.00000001
using namespace std;
struct vec
{
	double x, y;
	
	vec(double _x, double _y) : x(_x), y(_y) {}
};
struct point
{
	double x, y;
	
	point() {x = y = 0.0;}
	
	point(double _x, double _y) : x(_x), y(_y) {}
};
vec toVec(point a, point b)
{
	return vec(b.x - a.x, b.y - a.y);
}
double cross(vec a, vec b)
{
	return a.x * b.y - a.y * b.x;
}
inline bool collinear(point p1, point p2, point p3)
{
	return (fabs(cross(toVec(p1, p2), toVec(p1, p3))) < EPS);
}
int main()
{
	vector<point> v;
	double x, y;
	int n;
	int ans;
	while(cin >> n)
	{
		ans = 0;
		while(n--)
		{
			cin >> x >> y;
			
			v.push_back(point(x, y));
		}
		n = v.size();
		for (int i = 0 ; i < n - 2; i++)
		{
			for (int j = i + 1; j < n - 1 ; j++)
			{
				for (int k = j + 1; k < n; k++)
				{
					if (!collinear(v[i], v[j], v[k]))
						ans++;
				}
			}
		}
		cout << ans << '\n';
		v.clear();
	}
}
