#include <bits/stdc++.h>
using namespace std;
#define ll             long long int 
#define ulli           unsigned long long int 
#define li             long int 
#define ff(i,a,b)      for(int i=a;i<=b;i++)
#define fb(i,b,a)      for(int i=b;i>=a;i--)
#define w(t)           while(--t >= 0)
#define l(s)           s.length()
#define ci(n)          cin>>n;
#define fast           ios_base::sync_with_stdio(false);
#define sa(a,n)        sort(a,a+n)
#define sv(v)          sort(v.begin(),v.end())
#define cy             cout<<"YES\n"
#define cn             cout<<"NO\n"
#define nl             cout<<"\n"
#define minus          cout<<"-1\n";
#define vi             vector<int>
#define pb             push_back
#define tc             int t; cin>>t;
#define pp             pair<int,int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007
#define co(n)          cout<<n;
#define ret            return 0
#define mi             map<int,int>
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";   

int main()
{
    long n(0); scanf("%ld", &n);
    long digits[10] = {0};
    int total(0);
    for(long k = 0; k < n; k++)
    {
        int temp(0); 
        scanf("%d", &temp);
        ++digits[temp];
        total += temp; 
        total %= 3;
    }
    bool possible(1);
    if(digits[0] == 0)
    {
        possible = 0;
    }
    else
    {
        if(total == 1)
        {
            if(digits[1] > 0){--digits[1];}
            else if(digits[4] > 0){--digits[4];}
            else if(digits[7] > 0){--digits[7];}
            else if(digits[2] > 1){digits[2] -= 2;}
            else if(digits[2] > 0 && digits[5] > 0){--digits[2]; --digits[5];}
            else if(digits[2] > 0 && digits[8] > 0){--digits[2]; --digits[8];}
            else if(digits[5] > 1){digits[5] -= 2;}
            else if(digits[5] > 0 && digits[8] > 0){--digits[5]; --digits[8];}
            else if(digits[8] > 1){digits[8] -= 2;}
            else{possible = 0;}
        }
        if(total == 2)
        {
            if(digits[2] > 0){--digits[2];}
            else if(digits[5] > 0){--digits[5];}
            else if(digits[8] > 0){--digits[8];}
            else if(digits[1] > 1){digits[1] -= 2;}
            else if(digits[1] > 0 && digits[4] > 0){--digits[1]; --digits[4];}
            else if(digits[1] > 0 && digits[7] > 0){--digits[1]; --digits[7];}
            else if(digits[4] > 1){digits[4] -= 2;}
            else if(digits[4] > 0 && digits[7] > 0){--digits[4]; --digits[7];}
            else if(digits[7] > 1){digits[7] -= 2;}
            else{possible = 0;}
        }
    }
    bool isPositive(0); 
    for(int k = 1; k <= 9; k++)
    {
        if(digits[k] > 0)
        {
            isPositive = 1; 
            break;
        }
    }
    if(!isPositive)
    {
        puts("0");
    }
    else if(possible)
    {
        for(int k = 9; k >= 0; k--)
        {
            while(digits[k]--)
            {
                printf("%d", k);
            }
        };
        puts("");
    }
    else
    {
        puts("-1");
    }
    return 0;
}
