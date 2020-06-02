#define forn(i, n) for(int i = 0; i < int(n); i++) 

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	int lst = 1;
	vector<int> figs;
	forn(i, n){
		int x;
		scanf("%d", &x);
		if (lst != 1 && x != 1){
			puts("Infinite");
			return 0;
		}
		if (x != 1){
			figs.push_back(x);
			sum += x + 1;
			if (i != 0 && i != n - 1)
				sum += x + 1;
		}
		lst = x;
	}
	forn(i, int(figs.size()) - 1) if (figs[i] == 3 && figs[i + 1] == 2)
		--sum;
	printf("Finite\n%d\n", sum);
}
