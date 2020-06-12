#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int x,y;
    cin >> x >> y;
    int besta=y,bestb=y,bestc=y;
    int turns = 0;
    while(true)
    {
        if(besta>=x && bestb>=x && bestc>=x)
        {
            cout << turns << endl;
            break;
        }
        turns++;
        if(turns%3==1)
        {
            besta = bestb+bestc-1;
        }
        if(turns%3==2)
        {
            bestb = besta+bestc-1;
        }
        if(turns%3==0)
        {
            bestc = besta+bestb-1;
        }
    }
    return 0;
}
