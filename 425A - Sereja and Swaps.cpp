#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; 
    scanf("%d %d\n", &n, &k);
    vector<long> a(n, 0);
    for(int p = 0; p < n; p++)
    {
        scanf("%ld", &a[p]);
    }
    long output(-1e6);
    for(int left = 0; left < n; left++)
    {
        for(int right = left; right < n; right++)
        {
            vector<long> inside, outside;
            for(int p = 0; p < n; p++)
            {
                if(p < left || p > right)
                {
                    outside.push_back(a[p]);
                }
                else
                {
                    inside.push_back(a[p]);
                }
            }
            sort(inside.begin(), inside.end());
            sort(outside.begin(), outside.end(), greater<long>());
            long total(0);
            for(int p = 0; p < inside.size(); p++)
            {
                total += inside[p];
            }
            for(int p = 0; p < k; p++)
            {
                if(p >= inside.size() || p >= outside.size() || inside[p] > outside[p])
                {
                    break;
                }
                total += outside[p] - inside[p];
            }
            output = max(output,total);
        }
    }
    printf("%ld\n", output);
    return 0;
}
