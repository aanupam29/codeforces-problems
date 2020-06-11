#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int i, j, k;
    int n, m, a, b;
    cin>>n>>k>>a>>b;
    string s;
    int last = 0;
    char ch = '#';
    for(i = 0; i < n; i++)
    {
        if(last < k)
        {
            if(a >= b)
            {
                if(ch == 'G')
                {
                    last++;
                }
                else
                {
                    last = 1;
                }
                s.pb('G');
                ch = 'G';
                a--;
            }
            else
            {
                if(ch == 'B')
                {
                    last++;
                }
                else
                {
                    last = 1;
                }
                ch = 'B';
                s.pb('B');
                b--;
            }
        }
        else
        {
            last = 1;
            if(ch == 'G')
            {
                if(b <= 0)
                {
                    puts("NO\n");
                    return 0;
                }
                ch = 'B';
                s.pb('B');
                b--;
            }
            else
            {
                if(a <= 0)
                {
                    puts("NO");
                    return 0;
                }

                ch = 'G';
                s.pb('G');
                a--;
            }
        }
    }
    cout << s;
    return 0;
}
