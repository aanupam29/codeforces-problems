#include <bits/stdc++.h>
using namespace std;
const int M = 200 * 1000 + 11;
int main() {
	int q;
	cin >> q;
	vector<int> pos(M);
	int curl = 0;
	int curr = 0;
	for (int i = 0; i < q; ++i) 
	{
		string type;
		int id;
		cin >> type >> id;
		if (i == 0) 
		{
			pos[id] = curl;
			--curl;
			++curr;
		} 
		else 
		{
			if (type == "L") 
			{
				pos[id] = curl;
				--curl;
			} 
			else if (type == "R") 
			{
				pos[id] = curr;
				++curr;
			} 
			else 
			{
				cout << min(abs(pos[id] - curl), abs(pos[id] - curr)) - 1 << "\n";
			}
		}
	}
	return 0;
}
