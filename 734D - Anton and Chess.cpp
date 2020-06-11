#include <bits/stdc++.h>
using namespace std;
struct figurine
{
	char kind;
	int x, y;
};
int n;
int a,b;
figurine nearest[8];
inline int dist(int x1, int y1, int x2, int y2)
{
	return max(abs(x1 - x2), abs(y1 - y2));
}
inline void upd_nearest(figurine& was, const figurine& cur)
{
	if (was.kind == '?' || dist(a, b, cur.x, cur.y) < dist(a, b, was.x, was.y))
	    was = cur;
}
inline int get_direction(const figurine& cur)
{
	if (cur.x == a && cur.y < b) 
	    return 0;
	if (cur.x == a && cur.y > b) 
	    return 1;
	if (cur.y == b && cur.x < a) 
	    return 2;
	if (cur.y == b && cur.x > a) 
	    return 3;
	if ((cur.y - b) == (cur.x - a) && cur.x < a) 
	    return 4;
	if ((cur.y - b) == (cur.x - a) && cur.x > a)     
	    return 5;
	if ((cur.y - b) == (a - cur.x) && cur.y < b) 
	    return 6;
	if ((cur.y - b) == (a - cur.x) && cur.y > b)
	    return 7;
	return -1;
}
int main()
{
    cin>>n>>a>>b;
	for (int i = 0; i < 8; i++)
	{
		nearest[i].kind = '?';
	}
	for (int i = 0; i < n; i++)
	{
		figurine cur;
		cin>>cur.kind>>cur.x>>cur.y;
		int dir = get_direction(cur);
		if (dir >= 0)
			upd_nearest(nearest[dir], cur);
	}
	bool ans = false;
	for (int i = 0; i < 4; i++)
	{
		if (nearest[i].kind == 'R' || nearest[i].kind == 'Q')
			ans = true;
	}
	for (int i = 4; i < 8; i++)
	{
		if (nearest[i].kind == 'B' || nearest[i].kind == 'Q')
			ans = true;
	}
	puts(ans ? "YES" : "NO");
	return 0;
}
