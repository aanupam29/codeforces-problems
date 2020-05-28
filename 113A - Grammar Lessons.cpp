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
	char str[100000];
    int chk_len;
    int male = 0, female = 0;
    int adj = 0;
    int noun = 0;
    int verb = 0;
    int OK = 1;
    while( scanf("%s", str) != EOF )
    {
        chk_len = strlen(str);

        if(chk_len >= 4 && !strcmp(str+chk_len-4, "lios") ) 
        {
            if( noun || verb )
            { 
                printf("NO"); return 0;
            }
            adj++, male++;
        }
        else if( chk_len >= 5 && !strcmp(str+chk_len-5, "liala") )  
        {
            if( noun || verb )
            {
                printf("NO"); return 0;
            }
            adj++, female++;
        }
        else if( chk_len >= 3 && !strcmp(str+chk_len-3, "etr") )  
        {
            if( verb )
            { 
                printf("NO"); 
                return 0;
            }
            noun++, male++;
        }
        else if( chk_len >= 4 && !strcmp(str+chk_len-4, "etra") )  
        {
            if( verb )
            {  
                printf("NO"); 
                return 0;
            }
            noun++, female++;
        }
        else if( chk_len >= 6 && !strcmp(str+chk_len-6, "initis") ) 
        {
            verb++, male++;
        }
        else if( chk_len >= 6 && !strcmp(str+chk_len-6, "inites") ) 
        {
            verb++, female++;
        }

        else
        { 
            printf("NO"); 
            return 0; 
        }  
    }
    if( adj+noun+verb == 1 )
    { 
        printf("YES");
    }
    else
    {
        if( noun != 1 || male && female )
        {
            printf("NO"); 
            return 0;
        }
        printf("YES");
    }
    return 0;
}
